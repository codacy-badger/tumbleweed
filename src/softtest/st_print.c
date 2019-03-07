#include "st_print.h"
#include <stdarg.h>
#include <stdio.h>
#include <time.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define BOLD "\033[1m"

static const char str_project[]       = "software testing";
static const char summary_delimiter[] = "--------------------------------------------------------------------------------";
static const char str_test[]          = "TEST";
static const char str_passed[]        = "PASS";
static const char str_failed[]        = "FAIL";
static const char str_assertion[]     = "ASSERTION";

void softtest_print_new_line(void);
void softtest_print_passed_test(struct UnitTest *unitest);
void softtest_print_failed_test(struct UnitTest *unitest);
void softtest_print_elapsed_time(struct UnitTest *unitest);

void softtest_print_new_line(void)
{
        printf("\n");
}

void softtest_print_start(void)
{
        printf(BOLD "%s - " RESET, str_project);
        printf("%s", asctime(localtime(&(time_t){time(NULL)})));
        printf("%s\n", summary_delimiter);
}

void softtest_print_start_test(struct UnitTest *unittest)
{
        printf("[" BOLD "%s" RESET "]", str_test);
        printf(BOLD " %s::%d::%s" RESET, unittest->file, unittest->line, unittest->func);
        softtest_print_new_line();
}

void softtest_print_end_test(struct UnitTest *unittest)
{
        if (unittest->passed) {
                softtest_print_passed_test(unittest);
        } else {
                softtest_print_failed_test(unittest);
        }
}

void softtest_print_passed_test(struct UnitTest *unittest)
{
        printf("[" BOLD GREEN "%s" RESET "]", str_passed);
        softtest_print_elapsed_time(unittest);
        printf(" %s", unittest->func);
        softtest_print_new_line();
}

void softtest_print_failed_test(struct UnitTest *unittest)
{
        printf("[" BOLD RED "%s" RESET "]", str_failed);
        softtest_print_elapsed_time(unittest);
        printf(" %s", unittest->func);
        softtest_print_new_line();
}

void softtest_print_elapsed_time(struct UnitTest *unittest)
{
        printf("[%.9fs]", softtest_unit_test_elapsed_time(unittest));
}

void softtest_print_summary(const int total, const int passed, const int failed)
{
        printf("%s\n", summary_delimiter);
        printf(BOLD BLUE "summary:" RESET "\n");
        printf("total  = %d\n", total);
        printf(GREEN "passed" RESET " = %d ", passed);
        printf("[%3.0f%%]\n", 100.0 * passed / total);
        printf(RED "failed" RESET " = %d ", failed);
        printf("[%3.0f%%]\n", 100.0 * failed / total);
        printf("%s\n", summary_delimiter);
}

void softtest_print_assertion_failed(struct Assertion *assertion, const char *format, va_list argp)
{
        printf("%8c" BOLD RED "%s" RESET "]", '[', str_assertion);
        printf(" %s::%s::%d: ", assertion->file, assertion->function, assertion->line);
        vfprintf(stdout, format, argp);
        softtest_print_new_line();
}

