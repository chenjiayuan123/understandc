#include <stdio.h>

int lsPrime(int m){

	int i;

	for (i = 2; i < m; ++i)
	{
		if(0 == m%i)
			break;
	}
	if(i == m)
		return 1;
	else
		return 0;
}
int main(void){

	int val;
	int i;

	printf("输入一个整数\n");
	scanf("%d", &val);
	for (i = 2; i <= val; ++i){

		if (lsPrime(i))
			printf("%d\n", i );
	}

	return 0;
}