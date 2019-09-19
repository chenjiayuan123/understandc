#include <stdio.h>
int main(void)
{
    int a, b;

    printf("请输入两 个整数：");
    scanf("%d", &a);
     scanf("%d", &b);


    if (a % b)
        puts("b是a的约数。");
    else
    	puts("b不是a的约数。");

    return 0;
}