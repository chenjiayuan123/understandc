#include <stdio.h>
int main(void) {
    int  no, i;

    printf("n的值：");
    scanf("%d", &no);

    for (int i = 1; i <= no ; i++) {
        printf("%d的二次方是%d\n", i, i * i);

    }

    putchar('\n');
    return 0;
}
