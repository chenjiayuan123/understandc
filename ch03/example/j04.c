#include<stdio.h>
void main(void)
{
int a,b;
printf("请输入两个整数：");
scanf("%d %d",&a,&b);
if(a==b)
printf("a=b\n");
if(a>b)
printf("a>b\n");
if(a<b)
printf("a<b\n");
}