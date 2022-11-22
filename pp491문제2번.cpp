#include<stdio.h>
struct cracker
{
    int price;
    int calories;
};
int main(void)
{
    struct cracker basasak;
    printf("Enter the price and calories of the basasak : ");
    scanf("%d%d", &basasak.price, &basasak.calories);
    printf("price of the basasak : ₩%d\n",basasak.price);
    printf("calories of the basasak : %d kcal\n",basasak.calories);
    return 0;
}