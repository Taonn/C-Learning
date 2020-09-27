#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "abc\0defg";
	int n = strlen(str);
	printf("n = %d\n", n);

	return 0;
}
