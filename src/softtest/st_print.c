#include "st_print.h"
#include <stdarg.h>
#include <stdio.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define BOLD "\033[1m"

void softtest_print_passed_test(struct UnitTest *unitest);
void softtest_print_failed_test(struct UnitTest *unitest);

void softtest_print_start(void)
{
        printf("start \n");
}

void softtest_print_start_test(struct UnitTest *unittest)
{
        printf("[RUNNING]\n");
        printf("%s", unittest->file);
}

void softtest_print_end_test(struct UnitTest *unittest)
{
        printf("end test\n");
        printf("%s", unittest->file);
}

void softtest_print_summary(const int total, const int passed, const int failed)
{
        printf("%d %d %d\n", total, passed, failed);
}

void softtest_print_assertion_failed(struct Assertion *assertion, const char *format, va_list argp)
{
        printf("%s", assertion->file);
        vfprintf(stdout, format, argp);
}

