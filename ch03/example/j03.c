#include<stdio.h>

int main(void)
{
int x;
printf("请输入一个整数:");
scanf("%d",&x);
if(x<0)
x=-x;
printf("%d\n",x);

}