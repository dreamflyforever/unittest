#include <stdio.h>
#include "add.h"
#include "sub.h"

int main()
{
	int i;
	i = sub(2, 1);
	printf("2 - 1 = %d\n", i);

	i = add(1, 2);
	printf("1 + 2 = %d\n", i);

	printf("ADD and SUB unit test main\n");

	return 0;
}
