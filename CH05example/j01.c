#include <stdio.h>

int main(void){

	
	int x[5];
	
	for(int i =0 ;i < 5;i++){
	
		x[i] = i;
	
		printf("x[%d] = %d\n",i,x[i]);
	
	}
	
	return 0;
}