#include <stdio.h>

int main()
{
	int a[] = {  1, -2, 3,- 4, 5, -6, 7, -8, -9, 10 };
	int i = 0;
	int j = 0;
	int n = sizeof(a)/sizeof(a[0]);
	int tmp;

	// 1. 流程
	// 2. 试数
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}

	for(i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");

	return 0;

}
