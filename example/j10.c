#include<stdio.h>
int main(void)
{
	int num;
	int i = 0;
	printf("正整数：");
	scanf("%d", &num);
	while (i <= num) {
		if (++i % 4)

			putchar('*');

	printf("\n");

	}

	return 0;
}