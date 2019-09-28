#include <stdio.h>

int cube(int x){

	return x * x * x;
}

int diff(int a){

	return a;
}

int main(void){

	int x;

	puts("请输入1个整数。");
	printf("整数x："); scanf("%d", &x);

	printf("x的立方是：%d\n", diff(cube(x)));

	return 0;
}