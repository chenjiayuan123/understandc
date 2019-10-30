#include <stdio.h>
#include <math.h>

int pin(int s);

int main(){
    int s;
    printf("输入一个八进制数：");
    scanf("%d", &s);

    printf("转换为是十为进制%d", pin(s));

    return 0;
}
int pin(int s){
    int i = 0;
    int t = 0;

    while(s != 0){
        t = ((s % 10) * pow(8,i)) + t;
        ++i;
        s =  s / 10;

    }
    i = 1;

    return t;
}