#include <stdio.h>

void rev_intary(int v[],int n){

	int x, i;

	for (i = 0; i < n/2; i++)
	{
		x = v[i];
		v[i] = v[n-i-1];
		v[n-i-1] = x;	
	}
}

int main(void){
	int v[255], n, i;

	printf("请输入数组的元素的个数");
	scanf("%d", &n);

	printf("请输入数组的元素的值");
	for(i = 0; i < n; i++){
			scanf("%d",&v[i]);

	}
	rev_intary(v,n);

	printf("该数组的倒叙为");
	for(i = 0; i < n; i++){
		printf("%d\n", v[i]);
	}
	return 0;
}