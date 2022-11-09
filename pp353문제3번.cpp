#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[80];               //Array to enter a string
    char res_str[80];           //Array to store abbreviated strings
    char*star="**********";     //String to populate the ellipsis
    int len;                    //Archive length of input string
    printf("Enter words : ");
    scanf("%s",str);
    len=strlen(str);             //Calculating the length of a word entered
    if(len<=5)                   //Copy as is if length is less than 5
    {
        strcpy(res_str,str);
    }
    else                         //If it's greater than 5,
    {
        strncpy(res_str,str,5);             //First, just copy 5 letters
        res_str[5]='\0';                    //Save your text message at the end
        strncat(res_str,star,len-5);        //Fill the string with a star
    }
    printf("Enter words : %s,an omitted word : %s\n", str,res_str);

    return 0;

}