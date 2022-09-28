#include<stdio.h>
int main(void)
{
    int First , Second;
    char chOper;
    printf("Input your arithmetic operation:\n");
    scanf("%d%c%d", &First, &chOper, &Second);
    if(chOper =='+')
    {
       printf("%d+%d=%d\n",First,Second,First+Second);
    }
    else if(chOper =='-')
    {
       printf("%d-%d=%d\n",First,Second,First-Second);
    }
    else if(chOper == '*')
    {
        printf("%d*%d=%d\n",First,Second,First*Second);
    }
    else
    {
        printf("%d/%d=%d\n",First,Second,First/Second);
    }

    return 0;
}