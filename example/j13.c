#include <stdio.h>
int main(void) {
    int i, no,sum;
    sum =0;
    printf("请输入一个整数：");
    scanf("%d",&no);
    for(int i=0 ; i<=no ; i++){
    sum += i;
    }
    printf("和为%d\n",sum);
    return 0;
}