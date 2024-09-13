#include<stdio.h>

int main()
{
	//void *ptr; //void pointer
	int a[5];
	int * iptr;
	iptr = a;
	int i;

	for(i=0;i<5;i++)
	{
		scanf("%d", iptr+i); //pointer arithematic (can't be possible in void pointer)
	}
	printf("The first element %d\n", *iptr);
//	printf("The first element %d\n", *((int *)iptr)); //for void pointer

	printf("The address of 1st element %d\n", iptr); 
	iptr++;
	printf("The Second element %d\n", *iptr);
//	printf("The second element %d\n", *((int *)iptr)); //for void pointer

	printf("The address of 2nd element %d\n", iptr);

	return 0;
}
