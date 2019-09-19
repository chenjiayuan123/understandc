#include <stdio.h>
int main(void){
	int x, y;

	int wa;
	puts("请输入两个整数");
	printf("整数1："); scanf("%d", &x);
	printf("整数2: "); scanf("%d", &y);

	wa = x * y;

	printf("他们的和是%d。\n", wa);

	return 0;
}