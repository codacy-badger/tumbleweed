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

#include "softtest_internals.h"

struct SofttestStatus {
        int total_tests;
        int passed_tests;
        int failed_tests;
        const char *actual_test_file;
        const char *actual_test_name;
        int actual_test_line;
        bool actual_test_passed;
        struct timespec start_time;
        struct timespec end_time;
};

static struct SofttestStatus softtest_status;
static const char *softtestPassedString = "PASS";
static const char *softtestFailedString = "FAIL";

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
        timespec_get(&softtest_status.end_time, TIME_UTC);
        if (softtest_status.actual_test_passed) {
                softtest_status.passed_tests++;
                softtestSuccess();
        } else {
                softtest_status.failed_tests++;
        }
}

void softtestSuccess(void)
{
        printf("[%s]", softtestPassedString);
        printf(" ");
        double elapsed = (softtest_status.end_time.tv_sec -
                          softtest_status.start_time.tv_sec) +
                         (softtest_status.end_time.tv_nsec -
                          softtest_status.start_time.tv_nsec) /
                                 1.0E9;
        printf("[%.9f s]", elapsed);
        printf(" ");
        printf("%s::%d -> %s\n", softtest_status.actual_test_file,
               softtest_status.actual_test_line,
               softtest_status.actual_test_name);
}

void softtestFailure(void)
{
        printf("[%s]", softtestFailedString);
        printf(" ");
        double elapsed = (softtest_status.end_time.tv_sec -
                          softtest_status.start_time.tv_sec) +
                         (softtest_status.end_time.tv_nsec -
                          softtest_status.start_time.tv_nsec) /
                                 1.0E9;
        printf("[%.9f s]", elapsed);
        printf(" ");
        printf("%s::%d -> %s\n", softtest_status.actual_test_file,
               softtest_status.actual_test_line,
               softtest_status.actual_test_name);
}

int softtestEnd(void)
{
        printf("---\n");
        printf("summary:\n");
        printf("total = %d\n", softtest_status.total_tests);
        printf("passed = %d\n", softtest_status.passed_tests);
        printf("failed = %d\n", softtest_status.failed_tests);
        printf("---\n");
        return softtest_status.failed_tests;
}

void softtestAssert(const int condition, const char *expression,
                    const char *file, const char *function, const int line)
{
        if (!condition) {
                softtestAssertionFailed(file, function, line,
                                        "%s evaluated to false", expression);
        }
}

void softtestAssertionFailed(const char *file, const char *function,
                             const int line, const char *format, ...)
{
        softtest_status.actual_test_passed = false;
        printf("%s#%s(%d): ", file, function, line);
        va_list arg;
        va_start(arg, format);
        vprintf(format, arg);
        va_end(arg);
        printf("\n");
}

