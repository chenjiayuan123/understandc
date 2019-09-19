#include<stdio.h>

int main(void){
	
	int a,b,c,min;
	
	printf("输入三个整数：");
	
	scanf("%d %d %d", &a , &b ,&c);

	if (a<b<c)
	printf("最小值为：%d", a );
	else
		{printf("%d", (b<c), b);
		
		printf("最小值为：%d", c);
	}
	return 0;
}