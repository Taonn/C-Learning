#include <stdio.h>
int main()
{
    int *p1;
    int **p2;
    char *p3;
    char **p4;

    printf("sizeof(p1) = %d\n", sizeof(p1));
    printf("sizeof(p2) = %d\n", sizeof(p2));
    printf("sizeof(p3) = %d\n", sizeof(p3));
    printf("sizeof(p4) = %d\n", sizeof(p4));
    printf("sizeof(double *) = %d\n", sizeof(double *));
    
    return 0;
}
