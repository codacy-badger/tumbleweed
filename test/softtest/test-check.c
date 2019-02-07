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
