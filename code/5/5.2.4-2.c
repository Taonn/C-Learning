#include <stdio.h>

int main(){
	int a[] = {  1, -2, 3,- 4, 5, -6, 7, -8, -9, 10 };
	int i = 0;
	int j = sizeof(a) / sizeof(a[0]) - 1;
	int tmp;

	while (i < j){
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;	
		i++;
		j--;
	}
	for(i = 0; i < sizeof(a)/sizeof(a[0]); i++){
		printf("%d, ", a[i]);
	}
	printf("\n");

	return 0;
}
