#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main()
{
    int a[SIZE];
    int aboveAverage[SIZE], belowAverage[SIZE];
    int sum = 0;
    float avg = 0;
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        a[i] = rand() % 10 + 1;
        printf("%d ", a[i]);
        sum += a[i];
    }
    avg = (float)sum / SIZE;
    printf("\n\n合計値：%d\n平均値：%.0f\n\n", sum, avg);
    printf("平均値より大きい数：");
    for(int i = 0; i < SIZE; i++){
        if(a[i] > avg){
            printf("%d ", a[i]);
        }
    }
    printf("\n平均値より小さい数：");
    for(int i = 0; i < SIZE; i++){
        if(a[i] < avg){
            printf("%d ", a[i]);
        }
    }
    return 0;
}