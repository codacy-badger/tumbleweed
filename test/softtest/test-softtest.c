#include "softtest/softtest.h"

void assert_true(void);
void assert_false(void);

int main(void)
{
        SOFTTEST_START();
        SOFTTEST_RUN_TEST(assert_true);
        SOFTTEST_RUN_TEST(assert_false);
        return SOFTTEST_END();
}

void assert_true(void)
{
        ST_ASSERT(1 == 1);
}

void assert_false(void)
{
        ST_ASSERT(1 == 0);
}
