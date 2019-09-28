#include <stdio.h>
#define NUMBER 80

int main(void) {
    int i, j, max;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("请输入学生人数：");

    do {
        scanf("%d", &num);

        if (num < 1 || num > NUMBER) {
            printf("请输入1-%d的数：", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++) {
        printf("%2d号:", i + 1);

        do {
            scanf("%d", &tensu[i]);

            if (tensu[i] < 0 || tensu[i] > 100) {
                printf("请输入1-100的数：");
            }
        } while (tensu[i] < 0 || tensu[i] > 100);

        bunpu[tensu[i] / 10]++;
    }

    max = bunpu[0];

    for (i = 0; i < 10; i++) {

        if (bunpu[i] > max) {
            max = bunpu[i];
        }

    }

    puts("\n---分布图---\n");

    for (i = 0; i < max; i++) {
        for (j = 0; j < 10; j++) {
            if (bunpu[j] < (max-i)) {
                printf("    ");
            } else {
                printf("  * ");
            }
        }
        putchar('\n');
    }
    putchar('\n');

    printf("----------------------------------------------\n");

    for (i = 0; i <= 10; i++) {
        printf(" %2d ", i * 10);
    }

    putchar('\n');
    return 0;
}