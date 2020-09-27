#include <stdio.h>

int main()
{
	signed int a = -1089474374; //定义有符号整型变量a
	printf("%X\n", a); //结果为 BF0FF0BA

	//B       F      0        F       F     0        B	      A
	//1011 1111 0000 1111 1111 0000 1011 1010

	return 0;
}

