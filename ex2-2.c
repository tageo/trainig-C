#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("長方形の幅を入力してください: ");
    scanf("%d", &a);
    printf("長方形の高さを入力してください: ");
    scanf("%d", &b);
    printf("長方形の面積は %dm2 です\n",a*b);
}