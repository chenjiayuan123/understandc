#include <stdio.h>
int main(void)
{
	int a,b;

	printf("请输入两个整数");
	
	scanf("%d%d",&a,&b);
	
	if(a-b<=10||b-a<=10)printf("他们的差小于等于10");
	
	else{ printf("大于11");
}
}