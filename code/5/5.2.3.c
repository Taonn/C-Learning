#include <stdio.h>

int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 定义一个数组，同时初始化所有成员变量
    printf("a = %p\n", a);
    printf("&a[0]=%p\n", &a[0]);
    
    int n = sizeof(a);
    int n0 = sizeof(a[0]);
    
    int i = 0;
    for(i = 0;i < sizeof(a) / sizeof(a[0]); i++){
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}
