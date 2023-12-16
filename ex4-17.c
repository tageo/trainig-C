#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    k = 10;
    
    for(i = 0; i < k; i++)
    {
        for(j = k; j > 0; j--)
        {
            if( j >= (k - i)){
                printf("■");
            }
            else{
                printf("□");
            }
        }
        printf("\n");
    }
    return 0;
}