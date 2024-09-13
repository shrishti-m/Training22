#include<stdio.h>

int main()
{
	int n, arr[n], i;
	printf("Enter size of array:\n");
	scanf("%d", &n);

	printf("Enter elements: \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}

	int reverse[n] ,j=0;

	for(i=n-1;i>=0;i--)
	{
		reverse[j] = arr[i];
		j++;
	}

	printf("Reversed array is :\n");
	for(i=0; i<n ;i++)
	{
		printf("%d\n", reverse[i]);
	}
}
