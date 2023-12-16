#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a;
    srand(time(NULL));  // 乱数生成の初期化
    a = 0;
    
    while (a < 4)
    {
        printf("a=%d\n",a);
        a++;
    }

    printf("\n");
    return 0;
}