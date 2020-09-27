#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverse(char *p)
{
    if(p == NULL)
    {
        return -1;
    }
    char *str = p;
    int begin = 0;
    int end = strlen(str) - 1;
    char tmp;
    
    while(begin < end)
    {
        // 交换元素
        tmp = str[begin];
        str[begin] = str[end];
        str[end] = tmp;
        
        begin++;  //往右移动位置
        end--;	// 往左移动位置
    }
       
    return 0;
}
int main(void)
{
        //char *str = "abcdefg"; //文件常量区，内容不允许修改
        char str[] = "abcdef";
        
        int ret = inverse(str);
       
        if(ret != 0)
        {
            return ret;
        }
    
    printf("str = %s\n", str);
    
    return 0;
}
