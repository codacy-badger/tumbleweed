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

#include <stdbool.h>
/* internals functions, use macros instead */
void softtest_start(void);
void softtest_test(void (*test)(void), const char *file, const char *function, const int line);
int softtest_end(void);

void softtest_assert_int_equals(const int expected, const int actual, const char *file, const char *function, const int line);
void softtest_assert_true(const bool condition, const char *file, const char *function, const int line);
void softtest_assert_false(const bool condition, const char *file, const char *function, const int line);

/* macros */
#define ST_START() softtest_start()
#define ST_END() softtest_end()
#define ST_TEST(test) softtest_test(test, __FILE__, #test, __LINE__)

/* assertions */
#define ASSERT_TRUE(condition) softtest_assert_true(condition, __FILE__, __func__, __LINE__);
#define ASSERT_FALSE(condition) softtest_assert_false(condition, __FILE__, __func__, __LINE__);
#define ASSERT_I_EQ(expected, actual) softtest_assert_int_equals(expected, actual, __FILE__, __func__, __LINE__)

