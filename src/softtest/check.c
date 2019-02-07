#include "check.h"

bool softtestCheckTrue(bool condition)
{
        if (condition) {
                return true;
        } else {
                return false;
        }
}

bool softtestCheckFalse(bool condition)
{
        if (condition) {
                return false;
        } else {
                return true;
        }
}

bool softtestCheckIntEquals(const int expected, const int actual)
{
        if (actual == expected) {
                return true;
        } else {
                return false;
        }
}
