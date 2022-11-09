#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[80];
    strcpy(str,"wine");               //Copy wine to str array
    strcat(str,"apple");             //Put apple after wine.
    strncpy(str,"pear",1);          //Copy only the first character from string pear to str
    //After copying, the NULL character is not attached, so wineapple becomes pineapple.
    printf("%s,%lu\n",str,strlen(str));    //Find the string and its length of the str array and output it
    return 0;
}