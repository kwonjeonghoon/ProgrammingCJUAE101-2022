#include<stdio.h>
struct book
{
    char title[80];
    char author[20];
    int page;
    int price;
};
int main(void)
{
    struct book m1 = { "C language to study alone" , "Seo hyoun wu", 665 , 24500 };
    struct book *mp = &m1;
    printf("title : %s\n", mp->title);
    printf("author : %s\n", mp->author);
    printf("page : %d\n", mp->page);
    printf("price : %dwon\n\n", mp->price);

    struct book m2 = { "an uncomfortable convenience store" , "Kim hoyeon",320 , 14000 };
    struct book *mp1 = &m2;
    printf("title : %s\n", mp1->title);
    printf("author : %s\n",mp1->author);
    printf("page : %d\n",mp1->page);
    printf("price : %dwon\n\n", mp1->price);

    struct book m3 = { "a retrograde person" , "Ja cheong" , 314, 17500};
    struct book *mp2 = &m3;
    printf("title : %s\n", mp2->title);
    printf("author : %s\n", mp2->author);
    printf("page : %d\n",mp2->page);
    printf("price : %d\n\n", mp2->price);

    return 0;


}