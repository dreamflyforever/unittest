#include <stdio.h>
#include "add.h"

int check_eq(int input_a, int input_b, int expect)
{
	int retvalue;
	printf("------------------------------------------------------------------------------\n");
	printf("TEST: ");
	printf("\tInput\t[a =%2d]: ", input_a);
	printf("\tInput\t[b =%2d]: ", input_b);
	printf("\tExpect\t[e =%2d]: ", expect);
	int out = add(input_a, input_b);
	printf("\tOutput\t[o =%2d]: ", out);
	if (expect == out) {
		printf("PASS\n");
		retvalue = 1;
	} else {
		printf("FAIL\n");
		retvalue = 0;
	}
	printf("\n");
	return retvalue;
}

#define CHECK_EQ(a, b, expect, caculate, pass) \
	do { \
		caculate++; \
		pass += check_eq(a, b, expect); \
	} while (0);

int main()
{
	int pass = 0, all = 0;
	int retvalue;

	CHECK_EQ(1, 1, 3, all, pass);
	CHECK_EQ(2, 1, 3, all, pass);
	CHECK_EQ(3, 1, 3, all, pass);
	CHECK_EQ(4, 1, 3, all, pass);
	CHECK_EQ(5, 1, 3, all, pass);
	CHECK_EQ(6, 1, 3, all, pass);

	printf("All Test Done!\n\n");
	printf("Result: %2d/%2d [PASS/TOTAL]\n\n", pass, all);
	if (pass != all) {
		printf("!!! TEST FAIL !!!\n\n");
		retvalue = -1;
	} else {
		printf("$$$ TEST PASS $$$\n\n");
		retvalue = 0;
	}
	return retvalue;
}
