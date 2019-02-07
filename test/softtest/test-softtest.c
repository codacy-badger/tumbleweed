#include "softtest/softtest.h"

void assert_true(void);

int main(void)
{
        SOFTTEST_START();
        SOFTTEST_RUN_TEST(assert_true);
        return SOFTTEST_END();
}

void assert_true(void)
{
        ST_ASSERT(1 == 1);
}
