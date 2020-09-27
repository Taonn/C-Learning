#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *p = "11abcd111122abcd333abcd3322abcd3333322qqq";
	int n = 0;
	
	while((p = strstr(p, "abcd")) != NULL)
    {
        //能进来，肯定有匹配的子串
		//重新设置起点位置
        p = p + strlen("abcd");
        n++;
        
        if(*p == 0) // 结束符
        {
            break;
        }
    }
    printf("n = %d\n", n);
    
    return 0;
}
