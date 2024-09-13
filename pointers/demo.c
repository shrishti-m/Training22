#include<stdio.h>
int main()
{
	int a=5;
	int *iptr; //single pointer 
	int **dptr; //double pointer
	
	iptr = &a;
	dptr = &iptr;
	printf("Using variable a\n");
	printf("The value of a : %d\n", a);
	printf("The address of a : %u\n", &a);
//	printf("The value of *a : %d\n", *a);


    printf("Using iptr\n");
    printf("The value of iptr : %u\n", iptr);
    printf("The address of &iptr : %u\n", &iptr);
    printf("The value of *iptr : %d\n", *iptr);

    printf("Using dptr\n");
    printf("The value of dptr : %u\n", dptr);
    printf("The address of dptr : %u\n", &dptr);
    printf("The value of a : %d\n", **dptr);
	printf("The value of *iptr : %u\n", *dptr);

	return 0;
}
