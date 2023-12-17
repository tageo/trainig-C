#include <stdio.h>
#include <stdlib.h>  // Add this line

int main()
{
    int a[6];

    for(int i = 0; i < 6; i++){
        a[i] = rand() % 10 + 1;
        printf("a[%d]=%d ", i, a[i]);
    }
    return 0;
}