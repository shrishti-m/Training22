//dangling pointers are those pointers who are not initialised 

#include<stdio.h>

int main()
{
	int *temp;
	int a=5, b=6;
	temp =&a; //will work properly becoz temp is assigned to &a
	*temp = a+b; //segmentation fault will occur, if *temp is not assigned to any variable
	printf("The sum -  %d %d\n", *temp, a);
//	printf("The address - %d\n", temp);
//	printf("The address of pointer - %d\n", &temp);

	return 0;
}
