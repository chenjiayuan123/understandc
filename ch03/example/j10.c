#include<stdio.h>
int main(void)
{
	
	int x,y,z;
	printf("请输入三个整数：");
	scanf("%d,%d,%d",&x,&y,&z);
	
	if(x == y && y == z);
		printf("三个值各相同");
		else if(x == y ||x == z || y == z);
		printf("有两个值相等");
			else printf("三个值各不相同");
}