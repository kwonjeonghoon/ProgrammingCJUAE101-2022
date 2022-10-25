#include<stdio.h>
#include<string.h>      
#define password "1127" 

int main(void)
{
    char pw[5] = password;        
    char answer [5];    
    printf("Input your password.\n");
    scanf("%s",answer,5);

    while(1)
    {
        if(strcmp(pw,answer)==0)      
        break;
        printf("not matched, retry..\n");
        scanf("%s",answer,5);
    }
    printf("normal termination..\n");
    return 0;

}