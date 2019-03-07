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

#include "st_unittest.h"
#include <stdlib.h>

static struct UnitTest *current;

struct UnitTest *softtest_init_unit_test(const char *file, const char *func, const int line)
{
        struct UnitTest *unittest = malloc(sizeof(unittest));
        if (unittest) {
                unittest->file     = file;
                unittest->func     = func;
                unittest->line     = line;
                unittest->passed   = true;
                unittest->exit     = false;
                unittest->finished = false;
                timespec_get(&unittest->start, TIME_UTC);
        }
        return unittest;
}

void softtest_set_current_unit_test(struct UnitTest *unittest)
{
        current = unittest;
}

struct UnitTest *softtest_get_current_unit_test(void)
{
        return current;
}

void softtest_end_unit_test(struct UnitTest *unittest)
{
        timespec_get(&unittest->end, TIME_UTC);
        unittest->finished = true;
}

void softtest_free_unit_test(struct UnitTest *unitest)
{
        free(unitest);
        current = NULL;
}

double softtest_unit_test_elapsed_time(struct UnitTest *unittest)
{
        if (unittest->finished) {
                double elapsed = (unittest->end.tv_sec - unittest->start.tv_sec) +
                                 (unittest->end.tv_nsec - unittest->start.tv_nsec) / 1.0E9;
                return elapsed;
        } else {
                return -1;
        }
}

void softtest_unit_test_mark_failed(struct UnitTest *unittest)
{
        unittest->passed = false;
}

