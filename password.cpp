#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  srand(time(NULL));

  for (int i = 0; i < 5; i++) 
  {
    printf("%d \n", rand() % 100);
  }
  double average , variance = 0;
  int i,j;
  int sum = i+j;


  for(int i = 0; i < 5; i++) sum = sum + i;
  average = (double)sum/5;

  printf("평균: %f",average);

  return 0;
}