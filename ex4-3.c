#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a;
    srand(time(NULL));  // 乱数生成の初期化
    a = rand() % 10 + 1;
    printf("数:%d\n",a);

    do
    {
        printf("■");
        a--;
    } while (a > 0);

    printf("\n");
    return 0;
}