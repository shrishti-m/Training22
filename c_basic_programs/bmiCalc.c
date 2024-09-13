#include<stdio.h>

int main()
{
    int weight;
	int height;
	printf("Enter weight and height: \n");
	scanf("%d %d", &weight, &height);

	float bmi = weight/(height * height);

	printf("The BMI for weight %d and height %d is %f\n", weight, height, bmi);

	return 0;
}
