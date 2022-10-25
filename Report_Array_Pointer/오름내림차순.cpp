#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int a[10];
	int i, j;
	int temp;
	printf("Random integer:\n\n");
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() %10;
		printf("%2d", a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nascending order:");
	for (i = 0; i < 10; i++)
	{
		printf("%2d", a[i]);
	}
	printf("\n\ndescending order:");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d", a[i]);
	}
	return 0;
}