#include<stdio.h>
int main(void)
{
	int num;
	int i = 0;
	printf("正整数：");
	scanf("%d", &num);
	while (i < num) {
		if (++i % 2)

			putchar('+');

		else

			putchar('-');

	}

	return 0;
}