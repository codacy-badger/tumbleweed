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

/* st_check.h : Provides a set of functions for checking a relation between an
 * actual value and specified reference value(s)
 */

#include <stdbool.h>

/* Integers checks :
 * Following relation are available for integers :
 * - equals : '='
 * - not equals : '!='
 * - greater than : '>'
 * - greater or equals : '>='
 * - less than : '<'
 * - less or equals : '<='
 * - within : []
 * - outside : ][
 */

/* char */
bool softtest_check_char_equals(const char expected, const char actual);
bool softtest_check_char_not_equals(const char expected, const char actual);
bool softtest_check_char_greater_than(const char threshold, const char actual);
bool softtest_check_char_greater_or_equals(const char threshold,
                                           const char actual);
bool softtest_check_char_less_than(const char threshold, const char actual);
bool softtest_check_char_less_or_equals(const char threshold,
                                        const char actual);
bool softtest_check_char_within(const char low, const char high,
                                const char actual);
bool softtest_check_char_outside(const char low, const char high,
                                 const char actual);

/* short */
bool softtest_check_short_equals(const short expected, const short actual);
bool softtest_check_short_not_equals(const short expected, const short actual);
bool softtest_check_short_greater_than(const short threshold,
                                       const short actual);
bool softtest_check_short_greater_or_equals(const short threshold,
                                            const short actual);
bool softtest_check_short_less_than(const short threshold, const short actual);
bool softtest_check_short_less_or_equals(const short threshold,
                                         const short actual);
bool softtest_check_short_within(const short low, const short high,
                                 const short actual);
bool softtest_check_short_outside(const short low, const short high,
                                  const short actual);

/* int */
bool softtest_check_int_equals(const int expected, const int actual);
bool softtest_check_int_not_equals(const int expected, const int actual);
bool softtest_check_int_greater_than(const int threshold, const int actual);
bool softtest_check_int_greater_or_equals(const int threshold,
                                          const int actual);
bool softtest_check_int_less_than(const int threshold, const int actual);
bool softtest_check_int_less_or_equals(const int threshold, const int actual);
bool softtest_check_int_within(const int low, const int high, const int actual);
bool softtest_check_int_outside(const int low, const int high,
                                const int actual);

/* long */
bool softtest_check_long_equals(const long expected, const long actual);
bool softtest_check_long_not_equals(const long expected, const long actual);
bool softtest_check_long_greater_than(const long threshold, const long actual);
bool softtest_check_long_greater_or_equals(const long threshold,
                                           const long actual);
bool softtest_check_long_less_than(const long threshold, const long actual);
bool softtest_check_long_less_or_equals(const long threshold,
                                        const long actual);
bool softtest_check_long_within(const long low, const long high,
                                const long actual);
bool softtest_check_long_outside(const long low, const long high,
                                 const long actual);

/* long long */
bool softtest_check_long_long_equals(const long expected, const long actual);
bool softtest_check_long_long_not_equals(const long expected,
                                         const long actual);
bool softtest_check_long_long_greater_than(const long threshold,
                                           const long actual);
bool softtest_check_long_long_greater_or_equals(const long threshold,
                                                const long actual);
bool softtest_check_long_long_less_than(const long threshold,
                                        const long actual);
bool softtest_check_long_long_less_or_equals(const long threshold,
                                             const long actual);
bool softtest_check_long_long_within(const long low, const long high,
                                     const long actual);
bool softtest_check_long_long_outside(const long low, const long high,
                                      const long actual);

/* unsigned char */
bool softtest_check_unsigned_char_equals(const unsigned char expected,
                                         const unsigned char actual);
bool softtest_check_unsigned_char_not_equals(const unsigned char expected,
                                             const unsigned char actual);
bool softtest_check_unsigned_char_greater_than(const unsigned char threshold,
                                               const unsigned char actual);
bool softtest_check_unsigned_char_greater_or_equals(
        const unsigned char threshold, const unsigned char actual);
bool softtest_check_unsigned_char_less_than(const unsigned char threshold,
                                            const unsigned char actual);
bool softtest_check_unsigned_char_less_or_equals(const unsigned char threshold,
                                                 const unsigned char actual);
bool softtest_check_unsigned_char_within(const unsigned char low,
                                         const unsigned char high,
                                         const unsigned char actual);
bool softtest_check_unsigned_char_outside(const unsigned char low,
                                          const unsigned char high,
                                          const unsigned char actual);

/* unsigned short */
bool softtest_check_unsigned_short_equals(const unsigned short expected,
                                          const unsigned short actual);
bool softtest_check_unsigned_short_not_equals(const unsigned short expected,
                                              const unsigned short actual);
bool softtest_check_unsigned_short_greater_than(const unsigned short threshold,
                                                const unsigned short actual);
bool softtest_check_unsigned_short_greater_or_equals(
        const unsigned short threshold, const unsigned short actual);
bool softtest_check_unsigned_short_less_than(const unsigned short threshold,
                                             const unsigned short actual);
bool softtest_check_unsigned_short_less_or_equals(
        const unsigned short threshold, const unsigned short actual);
bool softtest_check_unsigned_short_within(const unsigned short low,
                                          const unsigned short high,
                                          const unsigned short actual);
bool softtest_check_unsigned_short_outside(const unsigned short low,
                                           const unsigned short high,
                                           const unsigned short actual);

/* unsigned int */
bool softtest_check_unsigned_int_equals(const unsigned int expected,
                                        const unsigned int actual);
bool softtest_check_unsigned_int_not_equals(const unsigned int expected,
                                            const unsigned int actual);
bool softtest_check_unsigned_int_greater_than(const unsigned int threshold,
                                              const unsigned int actual);
bool softtest_check_unsigned_int_greater_or_equals(const unsigned int threshold,
                                                   const unsigned int actual);
bool softtest_check_unsigned_int_less_than(const unsigned int threshold,
                                           const unsigned int actual);
bool softtest_check_unsigned_int_less_or_equals(const unsigned int threshold,
                                                const unsigned int actual);
bool softtest_check_unsigned_int_within(const unsigned int low,
                                        const unsigned int high,
                                        const unsigned int actual);
bool softtest_check_unsigned_int_outside(const unsigned int low,
                                         const unsigned int high,
                                         const unsigned int actual);

/* unsigned long */
bool softtest_check_unsigned_long_equals(const unsigned long expected,
                                         const unsigned long actual);
bool softtest_check_unsigned_long_not_equals(const unsigned long expected,
                                             const unsigned long actual);
bool softtest_check_unsigned_long_greater_than(const unsigned long threshold,
                                               const unsigned long actual);
bool softtest_check_unsigned_long_greater_or_equals(
        const unsigned long threshold, const unsigned long actual);
bool softtest_check_unsigned_long_less_than(const unsigned long threshold,
                                            const unsigned long actual);
bool softtest_check_unsigned_long_less_or_equals(const unsigned long threshold,
                                                 const unsigned long actual);
bool softtest_check_unsigned_long_within(const unsigned long low,
                                         const unsigned long high,
                                         const unsigned long actual);
bool softtest_check_unsigned_long_outside(const unsigned long low,
                                          const unsigned long high,
                                          const unsigned long actual);

/* unsigned long long */
bool softtest_check_unsigned_long_long_equals(const unsigned long long expected,
                                              const unsigned long long actual);
bool softtest_check_unsigned_long_long_not_equals(
        const unsigned long long expected, const unsigned long long actual);
bool softtest_check_unsigned_long_long_greater_than(
        const unsigned long long threshold, const unsigned long long actual);
bool softtest_check_unsigned_long_long_greater_or_equals(
        const unsigned long long threshold, const unsigned long long actual);
bool softtest_check_unsigned_long_long_less_than(
        const unsigned long long threshold, const unsigned long long actual);
bool softtest_check_unsigned_long_long_less_or_equals(
        const unsigned long long threshold, const unsigned long long actual);
bool softtest_check_unsigned_long_long_within(const unsigned long long low,
                                              const unsigned long long high,
                                              const unsigned long long actual);
bool softtest_check_unsigned_long_long_outside(const unsigned long long low,
                                               const unsigned long long high,
                                               const unsigned long long actual);

/* float/double checks :
 * following relations are available :
 * - equals : '='
 * - not equals : '!='
 * - greater than : '>'
 * - greater or equals: '>='
 * - less than : '<'
 * - less or equals : '<='
 * - finite : !=Nan, <+INFINITY, >-INFINITY
 * - infinite : =+INFINITY, =-INFINITY
 * - nan : =NaN
 * - within : '[]'
 * - outside : ][
 */

/*float */
bool softtest_check_float_equals(const float expected, const float actual);
bool softtest_check_float_equals_delta(const float expected, const float actual,
                                       const float delta);
bool softtest_check_float_not_equals(const float unexpected,
                                     const float actual);
bool softtest_check_float_greater_than(const float threshold,
                                       const float actual);
bool softtest_check_float_greater_or_equals(const float threshold,
                                            const float actual);
bool softtest_check_float_less_than(const float threshold, const float actual);
bool softtest_check_float_less_or_equals(const float threshold,
                                         const float actual);
bool softtest_check_float_finite(const float value);
bool softtest_check_float_infinite(const float value);
bool softtest_check_float_nan(const float value);
bool softtest_check_float_within(const float low, const float high,
                                 const float actual);
bool softtest_check_float_outside(const float low, const float high,
                                  const float actual);

/*double */
bool softtest_check_double_equals(const double expected, const double actual);
bool softtest_check_double_equals_delta(const double expected,
                                        const double actual,
                                        const double delta);
bool softtest_check_double_not_equals(const double unexpected,
                                      const double actual);
bool softtest_check_double_greater_than(const double threshold,
                                        const double actual);
bool softtest_check_double_greater_or_equals(const double threshold,
                                             const double actual);
bool softtest_check_double_less_than(const double threshold,
                                     const double actual);
bool softtest_check_double_less_or_equals(const double threshold,
                                          const double actual);
bool softtest_check_double_finite(const double value);
bool softtest_check_double_infinite(const double value);
bool softtest_check_double_nan(const double value);
bool softtest_check_double_within(const double low, const double high,
                                  const double actual);
bool softtest_check_double_outside(const double low, const double high,
                                   const double actual);
/* long double */
bool softtest_check_long_double_equals(const long double expected,
                                       const long double actual);
bool softtest_check_long_double_equals_delta(const long double expected,
                                             const long double actual,
                                             const long double delta);
bool softtest_check_long_double_not_equals(const long double unexpected,
                                           const long double actual);
bool softtest_check_long_double_greater_than(const long double threshold,
                                             const long double actual);
bool softtest_check_long_double_greater_or_equals(const long double threshold,
                                                  const long double actual);
bool softtest_check_long_double_less_than(const long double threshold,
                                          const long double actual);
bool softtest_check_long_double_less_or_equals(const long double threshold,
                                               const long double actual);
bool softtest_check_long_double_finite(const long double value);
bool softtest_check_long_double_infinite(const long double value);
bool softtest_check_long_double_nan(const long double value);
bool softtest_check_long_double_within(const long double low,
                                       const long double high,
                                       const long double actual);
bool softtest_check_long_double_outside(const long double low,
                                        const long double high,
                                        const long double actual);
