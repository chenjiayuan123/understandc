#include <stdio.h>
int main(void){
	
	int x;
	
	printf("请输入您的身高%d:\n"); scanf("%d", & x );
	printf("您的标准体重是%f\n：",(x - 100) * 0.9);
	
	return 0;
}