#include "test-softtest.h"

int main(void)
{
        SOFTTEST_START();
        SOFTTEST_RUN_TEST(softtestCheckTrue_True);
        SOFTTEST_RUN_TEST(softtestCheckTrue_False);
        SOFTTEST_RUN_TEST(softtestCheckFalse_False);
        SOFTTEST_RUN_TEST(softtestCheckFalse_True);
        return SOFTTEST_END();
}
