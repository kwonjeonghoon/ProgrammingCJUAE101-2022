#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        int random = rand() % 5;
        printf("%d", random);
    }
    return 0;
}