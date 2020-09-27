#include <stdio.h>

int a = 10;

int *getA()
{
	return &a;
}

int main()
{	
	*(getA()) = 111;
	printf("a = %d\n", a);
	// 输出： a = 111;
	return 0;
}
