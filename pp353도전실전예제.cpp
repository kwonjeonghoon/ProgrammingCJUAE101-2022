#include<stdio.h>
#include<string.h>

int main(void)
{
    char word1[1000]={0},word2[1000]={0},word3[1000]={0};
    char input[1000];
    printf("Input 3words : ");
    scanf("%s%s%s",word1,word2,word3);
    if(strcmp(word1,word2)<=0)
    {
        if(strcmp(word1,word3)<=0)
        {
            if(strcmp(word2,word3)<=0)
            {
                printf("%s%s%s",word1,word2,word3);
            }
            else printf("%s%s%s",word1,word3,word2);
        }
        else printf("%s%s%s",word3,word1,word2);
    }
    else printf("%s,%s,%s",word2,word3,word1);

    return 0;
}