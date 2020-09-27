#include <stdio.h>

int main(int argc, char **args)
{
    if(argc < 2)
        return 0;
    FILE *p = fopen(args[1], "rb");
    if(!p)
        return 0;
    char a[1024] = {0};
    fgets(a, sizeof(a),p);
    
    int len = 0;
    while(a[len])
    {
       	if(a[len] == '\n')
        {
            if(a[len - 1] == '\r')
            {
                printf("windows file\n");
            }else
            {
                printf("linux file\n");
            }
        }
    }
    
    fclose(p);
    
    return 0;
}
