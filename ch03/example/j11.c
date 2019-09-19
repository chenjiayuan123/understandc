#include <stdio.h>
int main(void)
{
	int a, b;

	puts("请输入两个整数");
	printf("整数1");scanf("%d", &a );
	printf("整数2");scanf("%d", &b );

	// printf("他们的差小于10.%d\n", a - b < 10);
	// printf("他们的差大于10。%d\n", a - b > 10); 

	(a - b < 10 || b - a < 10) ? printf("他们的差大于10.\n") : printf("他们的差小于10.\n");

return 0;
}