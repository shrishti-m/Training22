#include<stdio.h>

int main()
{
	int i;
	int arr[5];
	printf("Enter 5 integers:\n");

	for(i=0; i<5 ; i++)
	{
		printf("Element %d:\n", i);
		scanf("%d", &arr[i]);
	}

	printf("print array elements:\n");
	for(i=0;i<5;i++)
	{
		printf("element %d : %d\n", i, arr[i]);
	}

	return 0;
}
