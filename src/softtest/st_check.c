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
#include <math.h>

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
        return actual > threshold ? true : false;
}

bool softtest_check_char_greater_or_equals(const char threshold,
                                           const char actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_char_less_than(const char threshold, const char actual)
{
        return actual < threshold ? true : false;
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
        return actual > threshold ? true : false;
}

bool softtest_check_short_greater_or_equals(const short threshold,
                                            const short actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_short_less_than(const short threshold, const short actual)
{
        return actual < threshold ? true : false;
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
        return actual > threshold ? true : false;
}

bool softtest_check_int_greater_or_equals(const int threshold, const int actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_int_less_than(const int threshold, const int actual)
{
        return actual < threshold ? true : false;
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
        return actual > threshold ? true : false;
}

bool softtest_check_long_greater_or_equals(const long threshold,
                                           const long actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_long_less_than(const long threshold, const long actual)
{
        return actual < threshold ? true : false;
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
        return actual > threshold ? true : false;
}

bool softtest_check_long_long_greater_or_equals(const long threshold,
                                                const long actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_long_long_less_than(const long threshold, const long actual)
{
        return actual < threshold ? true : false;
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

/* unsigned char */
bool softtest_check_unsigned_char_equals(const unsigned char expected,
                                         const unsigned char actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_unsigned_char_not_equals(const unsigned char expected,
                                             const unsigned char actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_unsigned_char_greater_than(const unsigned char threshold,
                                               const unsigned char actual)
{
        return actual > threshold ? true : false;
}

bool softtest_check_unsigned_char_greater_or_equals(
        const unsigned char threshold, const unsigned char actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_unsigned_char_less_than(const unsigned char threshold,
                                            const unsigned char actual)
{
        return actual < threshold ? true : false;
}

bool softtest_check_unsigned_char_less_or_equals(const unsigned char threshold,
                                                 const unsigned char actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_unsigned_char_within(const unsigned char low,
                                         const unsigned char high,
                                         const unsigned char actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_unsigned_char_outside(const unsigned char low,
                                          const unsigned char high,
                                          const unsigned char actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* unsigned short */
bool softtest_check_unsigned_short_equals(const unsigned short expected,
                                          const unsigned short actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_unsigned_short_not_equals(const unsigned short expected,
                                              const unsigned short actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_unsigned_short_greater_than(const unsigned short threshold,
                                                const unsigned short actual)
{
        return actual > threshold ? true : false;
}

bool softtest_check_unsigned_short_greater_or_equals(
        const unsigned short threshold, const unsigned short actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_unsigned_short_less_than(const unsigned short threshold,
                                             const unsigned short actual)
{
        return actual < threshold ? true : false;
}

bool softtest_check_unsigned_short_less_or_equals(
        const unsigned short threshold, const unsigned short actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_unsigned_short_within(const unsigned short low,
                                          const unsigned short high,
                                          const unsigned short actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_unsigned_short_outside(const unsigned short low,
                                           const unsigned short high,
                                           const unsigned short actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* unsigned int */
bool softtest_check_unsigned_int_equals(const unsigned int expected,
                                        const unsigned int actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_unsigned_int_not_equals(const unsigned int expected,
                                            const unsigned int actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_unsigned_int_greater_than(const unsigned int threshold,
                                              const unsigned int actual)
{
        return actual > threshold ? true : false;
}

bool softtest_check_unsigned_int_greater_or_equals(const unsigned int threshold,
                                                   const unsigned int actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_unsigned_int_less_than(const unsigned int threshold,
                                           const unsigned int actual)
{
        return actual < threshold ? true : false;
}

bool softtest_check_unsigned_int_less_or_equals(const unsigned int threshold,
                                                const unsigned int actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_unsigned_int_within(const unsigned int low,
                                        const unsigned int high,
                                        const unsigned int actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_unsigned_int_outside(const unsigned int low,
                                         const unsigned int high,
                                         const unsigned int actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* unsigned long */
bool softtest_check_unsigned_long_equals(const unsigned long expected,
                                         const unsigned long actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_unsigned_long_not_equals(const unsigned long expected,
                                             const unsigned long actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_unsigned_long_greater_than(const unsigned long threshold,
                                               const unsigned long actual)
{
        return actual > threshold ? true : false;
}

bool softtest_check_unsigned_long_greater_or_equals(
        const unsigned long threshold, const unsigned long actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_unsigned_long_less_than(const unsigned long threshold,
                                            const unsigned long actual)
{
        return actual < threshold ? true : false;
}

bool softtest_check_unsigned_long_less_or_equals(const unsigned long threshold,
                                                 const unsigned long actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_unsigned_long_within(const unsigned long low,
                                         const unsigned long high,
                                         const unsigned long actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_unsigned_long_outside(const unsigned long low,
                                          const unsigned long high,
                                          const unsigned long actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* unsigned long long */
bool softtest_check_unsigned_long_long_equals(const unsigned long long expected,
                                              const unsigned long long actual)
{
        return actual == expected ? true : false;
}

bool softtest_check_unsigned_long_long_not_equals(
        const unsigned long long expected, const unsigned long long actual)
{
        return actual != expected ? true : false;
}

bool softtest_check_unsigned_long_long_greater_than(
        const unsigned long long threshold, const unsigned long long actual)
{
        return actual > threshold ? true : false;
}

bool softtest_check_unsigned_long_long_greater_or_equals(
        const unsigned long long threshold, const unsigned long long actual)
{
        return actual >= threshold ? true : false;
}

bool softtest_check_unsigned_long_long_less_than(
        const unsigned long long threshold, const unsigned long long actual)
{
        return actual < threshold ? true : false;
}

bool softtest_check_unsigned_long_long_less_or_equals(
        const unsigned long long threshold, const unsigned long long actual)
{
        return actual <= threshold ? true : false;
}

bool softtest_check_unsigned_long_long_within(const unsigned long long low,
                                              const unsigned long long high,
                                              const unsigned long long actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_unsigned_long_long_outside(const unsigned long long low,
                                               const unsigned long long high,
                                               const unsigned long long actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* float */
bool softtest_check_float_equals(const float expected, const float actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_equals_delta(const float expected, const float actual,
                                       const float delta)
{
        if (fabsf(actual - expected) <= delta) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_not_equals(const float unexpected, const float actual)
{
        if (actual != unexpected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_greater_than(const float threshold,
                                       const float actual)
{
        if (actual > threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_greater_or_equals(const float threshold,
                                            const float actual)
{
        if (actual >= threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_less_than(const float threshold, const float actual)
{
        if (actual < threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_less_or_equals(const float threshold,
                                         const float actual)
{
        if (actual < threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_finite(const float value)
{
        if (!isinf(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_infinite(const float value)
{
        if (isinf(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_nan(const float value)
{
        if (isnan(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_not_nan(const float value)
{
        if (!isnan(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_within(const float low, const float high,
                                 const float actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_float_outside(const float low, const float high,
                                  const float actual)
{
        if (actual < low || actual > high)
                return true;
        else {
                return false;
        }
}

/* double */
bool softtest_check_double_equals(const double expected, const double actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_equals_delta(const double expected,
                                        const double actual, const double delta)
{
        if (fabs(actual - expected) <= delta) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_not_equals(const double unexpected,
                                      const double actual)
{
        if (actual != unexpected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_greater_than(const double threshold,
                                        const double actual)
{
        if (actual > threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_greater_or_equals(const double threshold,
                                             const double actual)
{
        if (actual >= threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_less_than(const double threshold,
                                     const double actual)
{
        if (actual < threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_less_or_equals(const double threshold,
                                          const double actual)
{
        if (actual < threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_finite(const double value)
{
        if (!isinf(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_infinite(const double value)
{
        if (isinf(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_nan(const double value)
{
        if (isnan(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_not_nan(const double value)
{
        if (!isnan(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_within(const double low, const double high,
                                  const double actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_double_outside(const double low, const double high,
                                   const double actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* long double */
bool softtest_check_long_double_equals(const long double expected,
                                       const long double actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_equals_delta(const long double expected,
                                             const long double actual,
                                             const long double delta)
{
        if (fabsl(actual - expected) <= delta) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_not_equals(const long double unexpected,
                                           const long double actual)
{
        if (actual != unexpected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_greater_than(const long double threshold,
                                             const long double actual)
{
        if (actual > threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_greater_or_equals(const long double threshold,
                                                  const long double actual)
{
        if (actual >= threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_less_than(const long double threshold,
                                          const long double actual)
{
        if (actual < threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_less_or_equals(const long double threshold,
                                               const long double actual)
{
        if (actual < threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_finite(const long double value)
{
        if (!isinf(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_infinite(const long double value)
{
        if (isinf(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_nan(const long double value)
{
        if (isnan(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_not_nan(const long double value)
{
        if (!isnan(value)) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_within(const long double low,
                                       const long double high,
                                       const long double actual)
{
        if (actual >= low && actual < high) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_long_double_outside(const long double low,
                                        const long double high,
                                        const long double actual)
{
        if (actual < low || actual > high) {
                return true;
        } else {
                return false;
        }
}

/* float complex */
bool softtest_check_complex_float_equals(const float complex expected,
                                         const float complex actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_float_not_equals(const float complex unexpected,
                                             const float complex actual)
{
        if (actual != unexpected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_float_real(const float complex value)
{
        if (cimagf(value) == 0.0) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_float_imaginary(const float complex value)
{
        if (crealf(value) == 0.0) {
                return true;
        } else {
                return false;
        }
}

/* double complex */
bool softtest_check_complex_double_equals(const double complex expected,
                                          const double complex actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_double_not_equals(const double complex unexpected,
                                              const double complex actual)
{
        if (actual != unexpected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_double_real(const double complex value)
{
        if (cimagf(value) == 0.0) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_double_imaginary(const double complex value)
{
        if (crealf(value) == 0.0) {
                return true;
        } else {
                return false;
        }
}

/* long double complex */
bool softtest_check_complex_long_double_equals(
        const long double complex expected, const long double complex actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_long_double_not_equals(
        const long double complex unexpected, const long double complex actual)
{
        if (actual != unexpected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_long_double_real(const long double complex value)
{
        if (cimagf(value) == 0.0) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_complex_long_double_imaginary(
        const long double complex value)
{
        if (crealf(value) == 0.0) {
                return true;
        } else {
                return false;
        }
}

/* bool */
bool softtest_check_bool_true(const bool boolean)
{
        if (boolean) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_bool_false(const bool boolean)
{
        if (!boolean) {
                return true;
        } else {
                return false;
        }
}

/* pointers */
bool softtest_check_pointer_equals(const void *const expected,
                                   const void *const actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_pointer_not_equals(const void *const unexpected,
                                       const void *const actual)
{
        if (actual != unexpected) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_pointer_greater_than(const void *const threshold,
                                         const void *const actual)
{
        if (actual > threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_pointer_greater_or_equals(const void *const threshold,
                                              const void *const actual)
{
        if (actual >= threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_pointer_less_than(const void *const threshold,
                                      const void *const actual)
{
        if (actual < threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_pointer_less_or_equals(const void *const threshold,
                                           const void *const actual)
{
        if (actual <= threshold) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_pointer_null(const void *const pointer)
{
        if (!pointer) {
                return true;
        } else {
                return false;
        }
}

bool softtest_check_pointer_not_null(const void *const pointer)
{
        if (!pointer) {
                return true;
        } else {
                return false;
        }
}

/* arrays */
bool softtest_check_array_char_equals(const char *expected, const char *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_short_equals(const short *expected, const short *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_int_equals(const int *expected, const int *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_long_equals(const long *expected, const long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_long_long_equals(const long long *expected, const long long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_char_equals(const unsigned char *expected, const unsigned char *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_short_equals(const unsigned short *expected, const unsigned short *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_int_equals(const unsigned int *expected, const unsigned int *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_long_equals(const unsigned long *expected, const unsigned long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_long_long_equals(const unsigned long long *expected, const unsigned long long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_float_equals(const float *expected, const float *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_double_equals(const double *expected, const double *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_long_double_equals(const double *expected, const double *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_complex_float_equals(const float complex *expected, const float complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_complex_double_equals(const double complex *expected, const double complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_complex_long_double_equals(const long double complex *expected, const long double complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_bool_equals(const bool *expected, const bool *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_pointer_equals(const void **expected, const void **actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_char_not_equals(const char *expected, const char *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_short_not_equals(const short *expected, const short *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_int_not_equals(const int *expected, const int *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_long_not_equals(const long *expected, const long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_long_long_not_equals(const long long *expected, const long long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_unsigned_char_not_equals(const unsigned char *expected, const unsigned char *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_unsigned_short_not_equals(const unsigned short *expected, const unsigned short *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_unsigned_int_not_equals(const unsigned int *expected, const unsigned int *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_unsigned_long_not_equals(const unsigned long *expected, const unsigned long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_unsigned_long_long_not_equals(const unsigned long long *expected, const unsigned long long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_float_not_equals(const float *expected, const float *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_double_not_equals(const double *expected, const double *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_long_double_not_equals(const double *expected, const double *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_complex_float_not_equals(const float complex *expected, const float complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_complex_double_not_equals(const double complex *expected, const double complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_complex_long_double_not_equals(const long double complex *expected, const long double complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_bool_not_equals(const bool *expected, const bool *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_pointer_not_equals(const void **expected, const void **actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected[i]) {
                        return true;
                }
        }
        return false;
}

bool softtest_check_array_char_each_equals(const char expected, const char *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_short_each_equals(const short expected, const short *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_int_each_equals(const int expected, const int *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_long_each_equals(const long expected, const long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_long_long_each_equals(const long long expected, const long long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_char_each_equals(const unsigned char expected, const unsigned char *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_short_each_equals(const unsigned short expected, const unsigned short *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_int_each_equals(const unsigned int expected, const unsigned int *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_long_each_equals(const unsigned long expected, const unsigned long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_unsigned_long_long_each_equals(const unsigned long long expected, const unsigned long long *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_float_each_equals(const float expected, const float *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_double_each_equals(const double expected, const double *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_long_double_each_equals(const double expected, const double *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_complex_float_each_equals(const float complex expected, const float complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_complex_double_each_equals(const double complex expected, const double complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_complex_long_double_each_equals(const long double complex expected, const long double complex *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_bool_each_equals(const bool expected, const bool *actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

bool softtest_check_array_pointer_each_equals(const void *expected, const void **actual, const int length)
{
        for (int i = 0; i < length; i++) {
                if (actual[i] != expected) {
                        return false;
                }
        }
        return true;
}

/* strings */
bool softtest_check_string_equals(const char *expected, const char *actual)
{
        if (strcmp(actual, expected) == 0) {
                return true;
        }
        return false;
}

bool softtest_check_string_equals_length(const char *expected, const char *actual, size_t length)
{
        if (strncmp(actual, expected, length) == 0) {
                return true;
        }
        return false;
}

