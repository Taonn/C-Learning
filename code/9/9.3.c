#include <stdio.h>

enum weekday
{
	sun = 2, mon, tue, wed, thu, fri, sat
};
enum bool 
{
	false, true
};

int main()
{
	enum weekday a,b,c;
	a = sun;
	b = mon;
	c = tue;
	
	printf("%d,%d,%d\n", a, b, c);
	
	enum bool flag;
	flag = true;
	
	if(flag == 1)
	{
		printf("flag为真\n");
	}
	
	return 0;
}
