#ifndef ST_ASSERTION_H
#define ST_ASSERTION_H
struct Assertion {
        const char *file;
        const char *function;
        int line;
        struct UnitTest *unittest;
};
#endif /* ST_ASSERTION_H */
