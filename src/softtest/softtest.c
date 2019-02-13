/* Tumbleweed
Copyright © 2019 Johann MARTINET

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "check.h"
#include "softtest_internals.h"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define BOLD "\033[1m"

#define RETURN_IF_FAST_END                                                     \
        if (softtest_status.actual_test_fast_end) {                            \
                return;                                                        \
        }

struct SofttestStatus {
        int total_tests;
        int passed_tests;
        int failed_tests;
        const char *actual_test_file;
        const char *actual_test_name;
        int actual_test_line;
        bool actual_test_passed;
        bool actual_test_fast_end;
        struct timespec start_time;
        struct timespec end_time;
};

static struct SofttestStatus softtest_status;
static const char *softtestPassedString = "PASS";
static const char *softtestFailedString = "FAIL";
static const char *softtestDelimiterString =
        "----------------------------------------------------------------------"
        "----------";

void softtestStartTest(const char *file, const char *function, const int line);
void softtestEndTest(void);
void softtestSuccess(void);
void softtestFailure(void);
void softtestAssertionFailed(const char *file, const char *function,
                             const int line, const char *format, ...);

void softtestStart(void)
{
        softtest_status.total_tests  = 0;
        softtest_status.passed_tests = 0;
        softtest_status.failed_tests = 0;
}

void softtestRunTest(void (*test)(void), const char *file, const char *function,
                     const int line)
{
        softtestStartTest(file, function, line);
        test();
        softtestEndTest();
}

void softtestStartTest(const char *file, const char *function, const int line)
{
        softtest_status.actual_test_file   = file;
        softtest_status.actual_test_name   = function;
        softtest_status.actual_test_line   = line;
        softtest_status.actual_test_passed = true;
        softtest_status.total_tests++;
        timespec_get(&softtest_status.start_time, TIME_UTC);
}

void softtestEndTest(void)
{
        if (softtest_status.actual_test_passed) {
                timespec_get(&softtest_status.end_time, TIME_UTC);
                softtest_status.passed_tests++;
                softtestSuccess();
        } else {
                softtest_status.failed_tests++;
        }
}

void softtestSuccess(void)
{
        printf("[" BOLD GREEN "%s" RESET "]", softtestPassedString);
        printf(" ");
        double elapsed = (softtest_status.end_time.tv_sec -
                          softtest_status.start_time.tv_sec) +
                         (softtest_status.end_time.tv_nsec -
                          softtest_status.start_time.tv_nsec) /
                                 1.0E9;
        printf("[%.9f s]", elapsed);
        printf(" ");
        printf(BOLD "%s::%d" RESET " -> %s\n", softtest_status.actual_test_file,
               softtest_status.actual_test_line,
               softtest_status.actual_test_name);
}

void softtestFailure(void)
{
        timespec_get(&softtest_status.end_time, TIME_UTC);
        softtest_status.actual_test_passed = false;
        printf("[" BOLD RED "%s" RESET "]", softtestFailedString);
        printf(" ");
        double elapsed = (softtest_status.end_time.tv_sec -
                          softtest_status.start_time.tv_sec) +
                         (softtest_status.end_time.tv_nsec -
                          softtest_status.start_time.tv_nsec) /
                                 1.0E9;
        printf("[%.9f s]", elapsed);
        printf(" ");
        printf(BOLD "%s::%d" RESET " -> %s\n", softtest_status.actual_test_file,
               softtest_status.actual_test_line,
               softtest_status.actual_test_name);
}

int softtestEnd(void)
{
        printf("\n");
        printf("%s\n", softtestDelimiterString);
        printf(BOLD BLUE "summary:" RESET "\n");
        printf("total  = %d\n", softtest_status.total_tests);
        printf(GREEN "passed" RESET " = %d ", softtest_status.passed_tests);
        printf("[%3.0f%%]\n", 100.0 * softtest_status.passed_tests /
                                      softtest_status.total_tests);
        printf(RED "failed" RESET " = %d ", softtest_status.failed_tests);
        printf("[%3.0f%%]\n", 100.0 * softtest_status.failed_tests /
                                      softtest_status.total_tests);
        printf("%s\n", softtestDelimiterString);
        return softtest_status.failed_tests;
}

void softtestPass(void)
{
        softtest_status.actual_test_fast_end = true;
}

void softtestFail(const char *file, const char *function, const int line, ...)
{
        softtestFailure();
        printf("%*c" BOLD "%s::%s::%d " RESET "-> ", 7, ' ', file, function,
               line);
        softtest_status.actual_test_fast_end = true;
        va_list arg;
        va_start(arg, line);
        char *format = va_arg(arg, char *);
        vprintf(format, arg);
        va_end(arg);
        printf("\n");
}

void softtestAssertionFailed(const char *file, const char *function,
                             const int line, const char *format, ...)
{
        softtestFailure();
        printf("%*c" BOLD "%s::%s::%d " RESET "-> ", 7, ' ', file, function,
               line);
        va_list arg;
        va_start(arg, format);
        vprintf(format, arg);
        va_end(arg);
        printf("\n");
}

void softtestAssert(const int condition, const char *expression,
                    const char *file, const char *function, const int line)
{
        RETURN_IF_FAST_END;
        if (!condition) {
                softtestAssertionFailed(file, function, line,
                                        "%s evaluated to false", expression);
        }
}

void softtestAssertTrue(const bool condition, const char *file,
                        const char *function, const int line)
{
        RETURN_IF_FAST_END;
        if (!softtestCheckTrue(condition)) {
                softtestAssertionFailed(file, function, line,
                                        "expected true was false");
        }
}

void softtestAssertFalse(const bool condition, const char *file,
                         const char *function, const int line)
{
        RETURN_IF_FAST_END;
        if (!softtestCheckFalse(condition)) {
                softtestAssertionFailed(file, function, line,
                                        "expected false was true");
        }
}

void softtestAssertIntEquals(const int expected, const int actual,
                             const char *file, const char *function,
                             const int line)
{
        RETURN_IF_FAST_END;
        if (!softtestCheckIntEquals(expected, actual)) {
                softtestAssertionFailed(file, function, line,
                                        "expected (int) %d was %d", expected,
                                        actual);
        }
}

void softtestAssertIntNotEquals(const int unexpected, const int actual,
                                const char *file, const char *function,
                                const int line)
{
        RETURN_IF_FAST_END;
        if (!softtestCheckIntNotEquals(unexpected, actual)) {
                softtestAssertionFailed(file, function, line,
                                        "expected (int) %d not equals %d",
                                        actual, unexpected);
        }
}

void softtestAssertIntGreaterThan(const int threshold, const int actual,
                                  const char *file, const char *function,
                                  const int line)
{
        RETURN_IF_FAST_END;
        if (!softtestCheckIntGreaterThan(threshold, actual)) {
                softtestAssertionFailed(
                        file, function, line,
                        "expected %d greater than %d but was false", actual,
                        threshold);
        }
}

void softtestAssertIntGreaterOrEquals(const int threshold, const int actual,
                                      const char *file, const char *function,
                                      const int line)
{
        RETURN_IF_FAST_END;
        if (!softtestCheckIntGreaterOrEquals(threshold, actual)) {
                softtestAssertionFailed(
                        file, function, line,
                        "expected %d greater or equals %d but was false",
                        actual, threshold);
        }
}
