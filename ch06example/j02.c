#include <stdio.h>

int min3(int a, int b, int c){

	 if (a < b < b)
	 	return a;
	 else if(b < c)
	 	return b;
	 else
	 	return c;

}

int main(void){

	int n1, n2, n3;

	puts("请输入三个整数。");
	printf("整数1：");      scanf("%d", &n1);
	printf("整数2：");      scanf("%d", &n2);
	printf("整数3：");      scanf("%d", &n3);

	printf("较小的整数是%d", min3(n1, n2, n3));

	return 0;
}