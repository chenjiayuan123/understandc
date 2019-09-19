#include <stdio.h>
int main(void){
	int x, y;
	printf("整数x"); scanf("%f", &x);
	printf("整数y"); scanf("%f", &y);

	printf("%.2f%%",(double) x / y * 100 );

	return 0;

}