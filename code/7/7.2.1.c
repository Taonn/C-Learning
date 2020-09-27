#include <stdio.h>

int main()
{
	int a = 0;
	char b = 100;

	printf("%p, %p\n", &a, &b);

	int *p;
	p = &a;

	printf("%d\n", *p);

	char *p1 = &b;
	printf("%d\n", *p1);
	
	return 0;
}
