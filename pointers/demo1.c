#include<stdio.h>

int main()
{
	int *iptr;
	float *fptr;
	char *cptr;
	double *dptr;

	printf("size of iptr: %d\n", sizeof(iptr));
	printf("size of fptr: %d\n", sizeof(fptr));
	printf("size of cptr: %d\n", sizeof(cptr));
	printf("size of dptr: %d\n", sizeof(dptr));

	return 0;
}
