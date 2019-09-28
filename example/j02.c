#include <stdio.h>
int main(void)
{
	int n1, n2, sum, x, min, max;
	sum = 0;

	printf("整数1：");
	scanf("%d", &n1);


	printf("整数2：");
	scanf("%d", &n2);

	if (n1 > n2) {
		x = n1 - n2;
		max = n1;
		min = n2;
	}
	else
	{
		x = n2 - n1;
		max = n2;
		min = n1;
	}
	do {
		x = x - 1;
		sum += min + x;
	} while (x != 0);
	sum += max;
	printf("大于等于%d 小于等于%d 的所有整数的和是%d", min, max, sum);
}