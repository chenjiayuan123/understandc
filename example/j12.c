#include <stdio.h>
int main()
{
	int n, num = 0;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	
	while (n>0){
		num++;
		n /= 10;
	}
	printf("%d\n", num);
	return 0;
}