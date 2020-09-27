#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int count, *array, n;
    printf("请输入要申请数组的个数：\n");
    scanf("%d", &n);
    
    array = (int *)malloc(n * sizeof(int));
    if(array == NULL)
    {
        printf("申请空间失败!\n");
        return -1;
    }
    //将申请到空间清0
    memset(array, 0, sizeof(int)*n);
    
    for(count = 0; count < n; count++)
        array[count] = count;
    for(count = 0; count < n; count++)
        printf("%2d", array[count]);
    
    free(array);
    
    return 0;
    

}
