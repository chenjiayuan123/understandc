#include <stdio.h>
 
#define swap(int, a, b)  int x; x = a; a = b; b = x;
 
int main(void)
{
	int a, b;
	
	puts("请输入两个整数：");
	scanf("%d %d", &a, &b);
	
	swap(int, a, b);
	
	printf("%d %d",a, b);
	
	return 0;
}