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
#include <stdio.h>
#include "softtest/softtest.h"
#include "st_print.h"
#include "st_unittest.h"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define BOLD "\033[1m"

struct Softtest {
        int total;
        int passed;
        int failed;
        struct UnitTest unittest;
};

static struct Softtest softtest;
/* static const char *softtestPassedString = "PASS"; */
/* static const char *softtestFailedString = "FAIL"; */
void softtest_start_test(const char *file, const char *function, const int line);
void softtest_end_test(void);
/* void softtestSuccess(void); */
/* void softtestFailure(void); */
/* void softtestAssertionFailed(const char *file, const char *function, */
/*                              const int line, const char *format, ...); */

void softtest_start(void)
{
        softtest_print_start();
        softtest.total  = 0;
        softtest.passed = 0;
        softtest.failed = 0;
}

void softtest_test(void (*test)(void), const char *file, const char *function,
                   const int line)
{
        softtest_start_test(file, function, line);
        test();
        softtest_end_test();
}

void softtest_start_test(const char *file, const char *function, const int line)
{
        softtest.total++;
        struct UnitTest unittest = softtest_init_unit_test(file, function, line);
        softtest.unittest        = unittest;
        softtest_set_current_unit_test(&softtest.unittest);
        softtest_print_start_test(&unittest);
}

void softtest_end_test(void)
{
        softtest_end_unit_test(&softtest.unittest);
        if (softtest.unittest.passed) {
                softtest.passed++;
        } else {
                softtest.failed++;
        }
        softtest_print_end_test(&softtest.unittest);
}

int softtest_end(void)
{
        softtest_print_summary(softtest.total, softtest.passed, softtest.failed);
        return softtest.failed;
}

