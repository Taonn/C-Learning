#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *p = "11abcd111122abcd333abcd3322abcd3333322qqq";
	int n = 0;
	
	do
	{
		p = strstr(p, "abcd");
		if(p != NULL)
		{
			n++;
			// 重新设置查找的起点
			p = p + strlen("abcd");
		}
		else
		{
			break;
		}
	}while(*p != 0);
	
	printf("n=%d\n", n);
	
	return 0;
}
