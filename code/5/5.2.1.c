#include <stdio.h>
int main(){
	int a[10];
	a[0] = 0;

	a[9] = 9;

	int i = 0;
	for(i=0;i<10;i++){
		a[i] = i;
	}

	for(i=0;i<10;i++){
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}
