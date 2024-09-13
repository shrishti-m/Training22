#include<stdio.h>

int main()
{
	int i;
	int arr[10];

	for(i=0 ; i<10; i++)
	{
		arr[i] = i+1;
	}

	printf("First 10 natural numbers:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n ");

	return 0;
}

