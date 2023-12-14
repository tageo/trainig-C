#include <stdio.h>

int main()
{
    int year;
    printf("西暦を入力してください:");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("うるう年です\n");
    }
    return 0;
}