#include <stdlib.h>
#include <check.h>
#include "../include/my_allocator.h"

START_TEST(test_my_malloc) {
    void *memory = my_malloc(10);
    ck_assert_ptr_nonnull(memory);
    my_free(memory);
}
END_TEST

Suite *allocator_suite(void) {
    Suite *s = suite_create("Memory Allocator");
    TCase *tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_my_malloc);
    suite_add_tcase(s, tc_core);
    return s;
}

int main(void) {
    int no_failed = 0;
    Suite *s = allocator_suite();
    SRunner *runner = srunner_create(s);
    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

