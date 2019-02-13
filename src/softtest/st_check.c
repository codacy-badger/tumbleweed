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

#include "st_check.h"

/* char */
bool softtest_check_char_equals(const char expected, const char actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_char_not_equals(const char expected, const char actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_char_greater_than(const char threshold, const char actual)
{
        return actual > expected ? true : false;
}

bool softtest_check_char_greater_or_equals(const char threshold,
                                           const char actual)
{
        return actual >= expected ? true : false;
}

bool softtest_check_char_less_than(const char threshold, const char actual)
{
        return actual < expected ? true : false;
}

bool softtest_check_char_less_or_equals(const char threshold, const char actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_char_within(const char low, const char high,
                                const char actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_char_outside(const char low, const char high,
                                 const char actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* short */
bool softtest_check_short_equals(const short expected, const short actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_short_not_equals(const short expected, const short actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_short_greater_than(const short threshold,
                                       const short actual)
{
        return actual > expected ? true : false;
}

bool softtest_check_short_greater_or_equals(const short threshold,
                                            const short actual)
{
        return actual >= expected ? true : false;
}

bool softtest_check_short_less_than(const short threshold, const short actual)
{
        return actual < expected ? true : false;
}

bool softtest_check_short_less_or_equals(const short threshold,
                                         const short actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_short_within(const short low, const short high,
                                 const short actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_short_outside(const short low, const short high,
                                  const short actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* int */
bool softtest_check_int_equals(const int expected, const int actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_int_not_equals(const int expected, const int actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_int_greater_than(const int threshold, const int actual)
{
        return actual > expected ? true : false;
}

bool softtest_check_int_greater_or_equals(const int threshold, const int actual)
{
        return actual >= expected ? true : false;
}

bool softtest_check_int_less_than(const int threshold, const int actual)
{
        return actual < expected ? true : false;
}

bool softtest_check_int_less_or_equals(const int threshold, const int actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_int_within(const int low, const int high, const int actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_int_outside(const int low, const int high, const int actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* long */
bool softtest_check_long_equals(const long expected, const long actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_long_not_equals(const long expected, const long actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_long_greater_than(const long threshold, const long actual)
{
        return actual > expected ? true : false;
}

bool softtest_check_long_greater_or_equals(const long threshold,
                                           const long actual)
{
        return actual >= expected ? true : false;
}

bool softtest_check_long_less_than(const long threshold, const long actual)
{
        return actual < expected ? true : false;
}

bool softtest_check_long_less_or_equals(const long threshold, const long actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_long_within(const long low, const long high,
                                const long actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_outside(const long low, const long high,
                                 const long actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* long long */
bool softtest_check_long_long_equals(const long expected, const long actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_long_long_not_equals(const long expected, const long actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_long_long_greater_than(const long threshold,
                                           const long actual)
{
        return actual > expected ? true : false;
}

bool softtest_check_long_long_greater_or_equals(const long threshold,
                                                const long actual)
{
        return actual >= expected ? true : false;
}

bool softtest_check_long_long_less_than(const long threshold, const long actual)
{
        return actual < expected ? true : false;
}

bool softtest_check_long_long_less_or_equals(const long threshold,
                                             const long actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_long_long_within(const long low, const long high,
                                     const long actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_long_outside(const long low, const long high,
                                      const long actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}
