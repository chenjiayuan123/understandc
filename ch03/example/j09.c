#include<stdio.h>

int main(void){
	
	int a,b,c,min;
	
	printf("输入三个整数：");
	
	scanf("%d %d %d", &a , &b ,&c);
	
	min=a<b?a:b;
	
	min=c<min?c:min;
	
	printf("最小整数为：%d\n", min);

	return 0;

}