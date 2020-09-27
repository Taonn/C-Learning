#include <stdio.h>

int main(){
	float x = 0;
	int i = 0;
	x = 3.6f;
	
	i = x;
	i = (int)x;
	
	printf("x=%f, i=%d\n", x, i);
	
	return 0;
}
