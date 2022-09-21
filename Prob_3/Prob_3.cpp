#include<stdio.h>

int main(void)
{
	    double weight;
		double height;
		double BMI;
		double res;

		printf("Enter your weight(kg) and height(cm) : ");
		scanf_s("%lf%lf", &weight, &height);
		height /= 100;
		BMI = weight/(height*height);
		res = (BMI >= 20.0) && (BMI < 25.0);
		printf("%s", (res) ? "It`s the standard." : "You need to take care of your weight.");

		return 0;

	
}