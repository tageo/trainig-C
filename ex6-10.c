#include <stdio.h>
/*
* 2つの整数値を入力し、最大公約数と最小公倍数を求めるプログラムを作成せよ。
*/
int main()
{
    int a, b;
    int gcd(int a, int b);
    int lcm(int a, int b);
    printf("1つ目の値を入力してください:");
    scanf("%d", &a);

    printf("2つ目の値を入力してください:");
    scanf("%d", &b);
    printf("最大公約数は%dです\n", gcd(a, b));
    printf("最小公倍数は%dです\n", lcm(a, b));
}

int gcd(int a, int b)
{
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}