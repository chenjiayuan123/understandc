#include <stdio.h>

int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);
	i = 2;
	while (no >= i) {
		printf("%d", i);
		i = i * i;
		printf ("\n");
	}
	return 0;
}