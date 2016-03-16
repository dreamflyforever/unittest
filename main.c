#include <stdio.h>
#include "add.h"
#include "sub.h"

int main()
{
	int i;
	i = sub(2, 1);
	i = add(1, 2);
	printf("ADD and SUB unit test main\n");
	return 0;
}
