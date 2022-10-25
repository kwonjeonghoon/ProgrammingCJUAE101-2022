#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void)
{
    int i;
    int data[10];
    double average=0;
    int sum=0;
    double variance=0;
    double std=0;
    srand((int)time(NULL));

    for(i=0;i<10;i++)
    {
        data[i]=rand()%100;
    }
    for(i=0;i<10;i++)
    {
        sum += data[i];
        printf("%3d",data[i]);
    }
    average=sum/10.0;

    for(i=0;i<10;i++)
    {
        sum+=(data[i]-average)*(data[i]-average);
    }
    variance=sum/10.0;
    for(i=0;i<10;i++)
    {
        sum+=sqrt((data[i]-average)*(data[i]-average));
    }
    std=sqrt(variance);

    printf("\n");
    printf("average:%.1lf\n",average);
    printf("variance:%.1lf\n",variance);
    printf("standard deviation:%.1lf\n",sqrt(variance));

    return 0;
}