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
#ifndef ST_UNITTEST_H
#define ST_UNITTEST_H

#include <stdbool.h>
#include <time.h>

struct UnitTest {
        const char *file;
        const char *func;
        int line;
        bool passed;
        bool finished;
        bool exit;
        struct timespec start;
        struct timespec end;
};

struct UnitTest softtest_init_unit_test(const char *file, const char *func, const int line);
void softtest_free_unit_test(struct UnitTest *unittest);
void softtest_set_current_unit_test(struct UnitTest *unittest);
struct UnitTest *softtest_get_current_unit_test(void);
void softtest_end_unit_test(struct UnitTest *unittest);
double softtest_unit_test_elapsed_time(struct UnitTest *unittest);
void softtest_unit_test_mark_failed(struct UnitTest *unittest);
bool softtest_unit_test_passed(struct UnitTest *unittest);
#endif /* ST_UNITTEST_H */
