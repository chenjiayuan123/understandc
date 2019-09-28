#include <stdio.h>

int sumup(int n){

    int sum = 0;

    while(n > 0){
        sum = sum + n;
        n--;
    }

    return sum;
}

int main(void){

    int a;

    printf("输入一个值\n");
    scanf("%d", &a);

    printf("返回1到%d的和为：%d\n", a, sumup(a));

    return 0;

}