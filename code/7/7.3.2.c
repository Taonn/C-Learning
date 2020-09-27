#include <stdio.h>

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int i = 0;
    int n = sizeof(a)/sizeof(a[0]);
    
    for(i = 0; i < n; i++)
    {
    	// printf("%d, " a[i]);
        printf("%d,", *(a+i));
    }
    printf("\n");
    
    int *p = a;
    for(i = 0; i < n; i++)
    {
    	p[i] = 2 * i;
    }
    
    for(i = 0; i < n; i++)
    {
        printf("%d", *(p+i));
    }
    printf("\n");
    
    return 0;
    
}
