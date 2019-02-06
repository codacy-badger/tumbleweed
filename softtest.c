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
        int skipped_tests;
        const char *actual_test_file;
        const char *actual_test_name;
        int actual_test_line;
        bool actual_test_passed;
        struct timespec start_time;
        struct timespec end_time;
};

static struct SofttestStatus softtest_status;

void softtestStart(void)
{
        softtest_status.total_tests   = 0;
        softtest_status.passed_tests  = 0;
        softtest_status.failed_tests  = 0;
        softtest_status.skipped_tests = 0;
}

void softtestRunTest(void (*test)(void), const char *file, const char *function,
                     const int line)
{
        softtest_status.actual_test_file   = file;
        softtest_status.actual_test_name   = function;
        softtest_status.actual_test_line   = line;
        softtest_status.actual_test_passed = true;
        test();
}

void softtestEnd(void)
{
}

