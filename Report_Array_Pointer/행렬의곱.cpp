#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RAND_MAX 9

int main(void)
{
    srand(time(NULL));
    int A[4] [5] = {};
    int B[5] [4] = {};
    int C[4] [4] = {};
    int mul;
    int i, j, k;
    printf("A procession\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            A[i][j] = rand()%RAND_MAX;
            printf("%2d",A[i][j]);
        }
        printf("\n");
    }
    printf("B procession\n");
    for(i=0;i<5;i++)
    {
        for(k=0;k<4;k++)
        {
            B[i][k] = rand()%RAND_MAX;
            printf("%2d",B[i][k]);
        }
        printf("\n");
    }
    printf("A*B procession\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            mul = 0;
            for(k=0;k<4;k++)
            {
                mul+=A[i][k]*B[k][j];
            }
            C[i][j] = mul;
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}