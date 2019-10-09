#include <stdio.h>
 
#define diff(x,y) ((x > y) ? (x - y) : (y - x))
 
int main(void)
{
	int x, y;
	
	puts("请输入两个整数：");
	scanf("%d %d",&x, &y);
	printf("%d",diff(x, y));
	
	return 0; 
 } 