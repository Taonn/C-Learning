#include <stdio.h>

int main()
{

	char src[] = "ddda123abcd";
	char *p = strchr(src, 'a');
	printf("p = %s\n", p);

	return 0;
}
