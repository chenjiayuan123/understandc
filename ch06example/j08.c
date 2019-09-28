#include <stdio.h>

int min_of(const int v[],int n){

	int min = v[0];

	while(n-- > 0){
		if(v[n] < min)
			min = v[n];
		}
	
	return min;
}

int main(void){

	int n;

	printf("请输入数组的元素个数\n");
	scanf("%d", &n);
	int  v[255]={0};
	printf("请输入数组的元素的值\n");
	for(int i = 0; i < n; i++){
		scanf("%d",&v[i]);
	}

printf("最小值为%d",min_of(v,n) );

return 0;
}