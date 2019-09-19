#include <stdio.h>
int main(void){
	int x, y;
	printf("整数x"); scanf("%d", &x);
	printf("整数y"); scanf("%d", &y);

	printf("a和b的和是%d。\n", x + y );
	printf("a和b的乘积是%d。\n", x * y );

	return 0;
}