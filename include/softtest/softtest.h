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

#define SOFTTEST_START() softtestStart()
#define SOFTTEST_RUN_TEST(test) softtestRunTest(test, __FILE__, #test, __LINE__)
#define SOFTTEST_END() softtestEnd()
#define SOFTTEST_PASS() softtestPass()
#define SOFTTEST_FAIL(...)                                                     \
        softtestFail(__FILE__, __func__, __LINE__, __VA_ARGS__)

#define ST_ASSERT(expression)                                                  \
        softtestAssert(expression, #expression, __FILE__, __func__, __LINE__)
#define ST_ASSERT_TRUE(condition)                                              \
        softtestAssertTrue(condition, __FILE__, __func__, __LINE__)
#define ST_ASSERT_FALSE(condition)                                             \
        softtestAssertFalse(condition, __FILE__, __func__, __LINE__)
#define ST_ASSERT_INT_EQUALS(expected, actual)                                 \
        softtestAssertIntEquals(expected, actual, __FILE__, __func__, __LINE__)
#define ST_ASSERT_INT_NOT_EQUALS(unexpected, actual)                           \
        softtestAssertIntNotEquals(unexpected, actual, __FILE__, __func__,     \
                                   __LINE__)
#define ST_ASSERT_INT_GREATER_THAN(threshold, actual)                          \
        softtestAssertIntGreaterThan(threshold, actual, __FILE__, __func__,    \
                                     __LINE__)
#define ST_ASSERT_INT_GREATER_OR_EQUALS(threshold, actual)                     \
        softtestAssertIntGreaterOrEquals(threshold, actual, __FILE__,          \
                                         __func__, __LINE__)
