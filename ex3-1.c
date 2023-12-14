#include <stdio.h>

int main()
{
    int a;
    printf("整数値を入力してください:");
    scanf("%d", &a);

    if(a > 5){
        printf("5より大きいです\n");
    }

    return 0;
}