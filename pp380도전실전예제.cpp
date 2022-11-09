#include<stdio.h>

void input_data(int *pa, int *pb);
void swap_data(void);
void print_data(int a,int b);

int a,b;

int main(void)
{
    input_data(&a,&b);     //Enter an integer value in a global variable
    swap_data();           //Exchange two variables
    print_data(a,b);       //Output exchanged variable values

    return 0;
}
void input_data(int*ap,int*bp)
{
    printf("Enter two integers : ");
    scanf("%d%d",ap,bp);
}
void swap_data(void)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void print_data(int a,int b)
{
    printf("Output two integers : %d,%d",a,b);
}