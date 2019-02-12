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

#include "test-softtest.h"

void softtestCheckTrue_True(void)
{
        if (softtestCheckTrue(1 == 1)) {
                SOFTTEST_PASS();
        } else {
                SOFTTEST_FAIL("softtestCheckTrue should return true");
        }
}

void softtestCheckTrue_False(void)
{
        if (softtestCheckTrue(1 == 0)) {
                SOFTTEST_FAIL("softtestCheckTrue should return false");
        } else {
                SOFTTEST_PASS();
        }
}

void softtestCheckFalse_False(void)
{
        if (softtestCheckFalse(1 == 0)) {
                SOFTTEST_PASS();
        } else {
                SOFTTEST_FAIL("softtestCheckFalse should return true");
        }
}

void softtestCheckFalse_True(void)
{
        if (softtestCheckFalse(1 == 1)) {
                SOFTTEST_FAIL("softtestCheckFalse should return false");
        } else {
                SOFTTEST_PASS();
        }
}

void softtestCheckIntEquals_False(void)
{
        ST_ASSERT_FALSE(softtestCheckIntEquals(1, 2));
        ST_ASSERT_FALSE(softtestCheckIntEquals(0, 1));
        ST_ASSERT_FALSE(softtestCheckIntEquals(0, -1));
        ST_ASSERT_FALSE(softtestCheckIntEquals(-2, -1));
}

void softtestCheckIntEquals_True(void)
{
        ST_ASSERT_TRUE(softtestCheckIntEquals(1, 1));
        ST_ASSERT_TRUE(softtestCheckIntEquals(0, 0));
        ST_ASSERT_TRUE(softtestCheckIntEquals(-1, -1));
}

