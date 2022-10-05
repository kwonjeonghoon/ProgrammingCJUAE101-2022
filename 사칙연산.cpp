#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    if(y==0)
    {
    printf("It must not be divided by zero.\n");
    return 0;
    }
    return x/y;
}
int rem(int x,int y)
{
    return x%y;
}

int main(void)
{
    int x,y;

    printf("Enter an integer value:");
    scanf("%d %d", &x, &y);

    printf("add: %d+%d=%d\n", x, y, add(x,y));
    printf("sub: %d-%d=%d\n", x, y, sub(x,y));
    printf("mul: %d*%d=%d\n", x, y, mul(x,y));
    printf("div: %d/%d=%d\n", x, y, div(x,y));
    printf("rem: %d﹪%d=%d\n", x, y, rem(x,y));

    return 0;
}