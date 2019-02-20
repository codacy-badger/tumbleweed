#include "st_assertion.h"
#include <stdarg.h>
#include "softtest/softtest.h"
#include "st_check.h"
#include "st_print.h"
#include "st_unittest.h"

struct Assertion softtest_assertion_start(const char *file, const char *function, const int line);
void softtest_assertion_failed(struct Assertion *assertion, const char *format, ...);

struct Assertion softtest_assertion_start(const char *file, const char *function, const int line)
{
        struct Assertion assertion;
        assertion.file     = file;
        assertion.function = function;
        assertion.line     = line;
        assertion.unittest = softtest_get_current_unit_test();
        return assertion;
}

void softtest_assertion_failed(struct Assertion *assertion, const char *format, ...)
{
        softtest_unit_test_mark_failed(assertion->unittest);
        va_list argp;
        va_start(argp, format);
        softtest_print_assertion_failed(assertion, format, argp);
        va_end(argp);
}

/* assertions */
void softtest_assert_int_equals(const int expected, const int actual, const char *file, const char *function, const int line)
{
        struct Assertion assertion = softtest_assertion_start(file, function, line);
        if (!softtest_check_int_equals(expected, actual)) {
                softtest_assertion_failed(&assertion, "expected %d but was %d", expected, actual);
        }
}

