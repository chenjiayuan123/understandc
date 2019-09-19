#include <stdio.h>

int main(void) {

	int isRepeat = 4;

	do {

		int input;

		printf("输入一个整数\n");

		scanf("%d", &input);

		if (input > 0) {
		printf(" 该数是正数");
		else if (input < 0);
		printf("该数是负数");

	}while (isRepeat !=0);

	printf("好了\n");

	return 0;
}