#include <stdio.h>

int main()
{
	int a;
	printf("请输入a的值：");

	//不要加"\n"
	scanf("%d", &a);
	printf("a = %d\n", a); //打印a的值
    
	return 0;
}
