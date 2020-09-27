#include <stdio.h>
// 求两数的最大值
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
    int a1 = 10, b1 = 20, c1 = 0;
    c1 = max(a1, b1); // 调用max()
    
    int a2 = 11, b2 = 21, c2 = 0;
    c2 = max(a2, b2);
    

    printf("c1= %d, c2 = %d\n",c1, c2);
    return 0;
}
