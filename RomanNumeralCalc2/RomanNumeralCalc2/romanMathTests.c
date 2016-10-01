/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "romanMathTests.check" instead.
 */

#include <check.h>

#line 1 "romanMathTests.check"
#include "romanMath.h"

START_TEST(additionCheck)
{
#line 4
	ck_assert_msg(strcmp(add("V", "I"), "VI") == 0,"Failed to add V + I");
	ck_assert_msg(strcmp(add("XXXII", "LXIV"), "XCVI") == 0, "Failed to add XXXII + LXIV"); 
	ck_assert_msg(strcmp(add("IV", "V"), "IX") == 0, "Failed to add IV + V");
	ck_assert_msg(strcmp(add("MMMCMXCVIII", "I"), "MMMCMXCIX") == 0, "Failed to add MMMCMXCVIII + I");
	ck_assert_msg(strcmp(add("MMMDCCCLXXXVIII", "II"), "MMMDCCCXC") == 0, "Failed to add MMMDCCCLXXXVIII + II");
	
}
END_TEST

START_TEST(subtractionCheck)
{
#line 11
	ck_assert_msg(strcmp(sub("V", "I"), "IV") == 0,"Failed to subtract V - I");
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, additionCheck);
    tcase_add_test(tc1_1, subtractionCheck);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
