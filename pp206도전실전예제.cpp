#include<stdio.h>
int main(void)
{
    int sum = 0;
    int n = 1;
    do
    {
        sum = sum + n;
        n = n + 1;
        /* code */
    } while (n <=10);
    printf("The sum of the natural numbers 1 to 10 = %d", sum);

    return 0;
    
}