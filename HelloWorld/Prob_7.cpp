#include<stdio.h>
int main(void)
{
    int First , Second = 0;
    char chOper;
    printf("Input your arithmetic operation:\n");
    scanf("%d%c%d", &First,&chOper,&Second);
    switch(chOper)
    {
        case '+':
        {
        printf("Addition:\n");
        int Res = First+Second;
        printf("%d%c%d = %d\n", First,chOper,Second,Res);
        break;
        }
        case '-':
        {
            printf("Subtraction:\n");
            int Res = First-Second;
            printf("%d%c%d = %d\n", First ,chOper,Second,Res);
            break;
        }
        case '*':
        {
            printf("Multiplication:\n");
            int Res = First*Second;
            printf("%d%c%d = %d\n", First ,chOper,Second,Res);
            break;
        }
        case '/':
        {
            printf("division:\n");
            int Res = First/Second;
            printf("%d%c%d = %d\n", First,chOper,Second,Res);
            break;
        }
        default:
        {
            printf("Error : you should check your input...\n");
            break;
        }
        
    }

    return 0;


    
}