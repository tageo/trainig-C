#include <stdio.h>

int main()
{
    int a;
    printf("整数値を入力してください:");
    scanf("%d", &a);

    if(a != 1){
        printf("1ではありませんね!!!\n");
    }

    return 0;
}