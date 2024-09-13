#include<stdio.h>
#include<stdlib.h>

int main()
{
	float bmi;
	printf("Enter bmi:\n");
	scanf("%f", &bmi);

	if(bmi < 18.5)
	{  printf("Underweight\n"); }

	else if(bmi >= 18.5 && bmi <= 24.9) 
	{
		printf("Normal Weight\n");
	}
	else if(bmi >= 25 && bmi <= 29.9)
	{
		printf("Overweight\n");
	}
	else { printf("Obesity\n"); }

	return EXIT_SUCCESS;
}
