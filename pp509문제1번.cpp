#include<stdio.h>
struct marriage
{
    char name[20];
    int age;
    char sex;
    double height;
};
int main(void)
{
    struct marriage m1 = { "Andy" , 22, 'm', 187.5 };
    struct marriage *mp = &m1;
    printf("Name : %s\n", mp->name);
    printf("age : %d\n", mp->age);
    printf("sex : %c\n", mp->sex);
    printf("height : %.1lf\n", mp->height);

    return 0;
}
