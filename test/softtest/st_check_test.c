#include "st_check.h"
#include "test-softtest.h"

/* char */
void check_char_equals(void)
{
        ASSERT_TRUE(softtest_check_char_equals('a', 'a'));
        ASSERT_TRUE(softtest_check_char_equals('A', 'A'));
        ASSERT_FALSE(softtest_check_char_equals('a', 'b'));
        ASSERT_FALSE(softtest_check_char_equals('A', 'B'));
}

void check_char_not_equals(void)
{
        ASSERT_TRUE(softtest_check_char_not_equals('a', 'b'));
        ASSERT_TRUE(softtest_check_char_not_equals('A', 'B'));
        ASSERT_FALSE(softtest_check_char_not_equals('a', 'a'));
        ASSERT_FALSE(softtest_check_char_not_equals('A', 'A'));
}

void check_char_greater_than(void)
{
        ASSERT_TRUE(softtest_check_char_greater_than('a', 'b'));
        ASSERT_FALSE(softtest_check_char_greater_than('a', 'a'));
        ASSERT_FALSE(softtest_check_char_greater_than('b', 'a'));
}

void check_char_greater_or_equals(void)
{
        ASSERT_TRUE(softtest_check_char_greater_or_equals('a', 'b'));
        ASSERT_TRUE(softtest_check_char_greater_or_equals('a', 'a'));
        ASSERT_FALSE(softtest_check_char_greater_or_equals('b', 'a'));
}

void check_char_less_than(void)
{
        ASSERT_TRUE(softtest_check_char_less_than('b', 'a'));
        ASSERT_FALSE(softtest_check_char_less_than('a', 'a'));
        ASSERT_FALSE(softtest_check_char_less_than('a', 'b'));
}

void check_char_less_or_equals(void)
{
        ASSERT_TRUE(softtest_check_char_less_or_equals('b', 'a'));
        ASSERT_TRUE(softtest_check_char_less_or_equals('a', 'a'));
        ASSERT_FALSE(softtest_check_char_less_or_equals('a', 'b'));
}

void check_char_within(void)
{
        ASSERT_TRUE(softtest_check_char_within('a', 'c', 'b'));
        ASSERT_TRUE(softtest_check_char_within('a', 'b', 'a'));
        ASSERT_FALSE(softtest_check_char_within('a', 'b', 'b'));
        ASSERT_FALSE(softtest_check_char_within('a', 'b', 'c'));
}

void check_char_outside(void)
{
        ASSERT_TRUE(softtest_check_char_outside('a', 'b', 'c'));
        ASSERT_FALSE(softtest_check_char_outside('a', 'b', 'a'));
        ASSERT_FALSE(softtest_check_char_outside('a', 'b', 'b'));
        ASSERT_FALSE(softtest_check_char_outside('a', 'c', 'b'));
}

/* short */
void check_short_equals(void)
{
        ASSERT_TRUE(softtest_check_short_equals(1, 1));
        ASSERT_TRUE(softtest_check_short_equals(2, 2));
        ASSERT_TRUE(softtest_check_short_equals(0, 0));
        ASSERT_TRUE(softtest_check_short_equals(-1, -1));
        ASSERT_FALSE(softtest_check_short_equals(1, 2));
        ASSERT_FALSE(softtest_check_short_equals(0, 1));
        ASSERT_TRUE(softtest_check_short_equals(-1, 1));
}

/* boolean */
void check_true(void)
{
        ASSERT_TRUE(softtest_check_bool_true(true));
        ASSERT_FALSE(softtest_check_bool_true(false));
        ASSERT_TRUE(softtest_check_bool_true(1));
        ASSERT_FALSE(softtest_check_bool_true(0));
}

void check_false(void)
{
        ASSERT_TRUE(softtest_check_bool_false(false));
        ASSERT_FALSE(softtest_check_bool_false(true));
        ASSERT_TRUE(softtest_check_bool_false(0));
        ASSERT_FALSE(softtest_check_bool_false(1));
}

