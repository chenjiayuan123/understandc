#include <stdio.h>
int main(void){
	int a, b;
	printf("整数a"); scanf("%d", &a);
	printf("整数b"); scanf("%d", &b);

	printf("a是b的%.6f%%",(double) a / b * 100 );

	return 0;

}