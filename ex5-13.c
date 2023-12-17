#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3

int main()
{
    int a[SIZE][SIZE];
    int max,min;

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            a[i][j] = rand() % 9 + 1;
            printf("%d ", a[i][j]);
            if(j % SIZE == 2){
                printf("\n");
            }
            if(max <= a[i][j]){
                max = a[i][j];

            }
            if(min >= a[i][j]){
                min = a[i][j];
            }
        }
    }
   
    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);
    return 0;
}