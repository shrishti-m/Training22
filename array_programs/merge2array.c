#include<stdio.h>

void merge_arrays(int arr1[], int arr2[], int n, int m, int merge[])
{
	int i,j;

	for(i=0;i<n;i++)
	{
		merge[i] = arr1[i];
	}

	for(j=0;j<m;j++)
	{
		merge[i+j] = arr2[j];
	}
}
	




int main()
{
	int n, m, arr1[n], arr2[m], i;
	printf("Enter size of array1:\n");
	scanf("%d", &n);
	printf("Enter size of array2:\n");
	scanf("%d", &m);

	printf("Enter elements: \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr1[i]);
	}

	printf("Enter elements: \n");
	for(i=0;i<m;i++)
	{
		scanf("%d", &arr2[i]);
	}

	int mergedSize = n + m;
	int merge[mergedSize];

	merge_arrays(arr1, arr2, n, m, merge);

	printf("Merged Array: \n");
	for(i=0;i<mergedSize;i++)
	{
		printf("%d ", merge[i]);
	}

	printf("\n");
	return 0;
}
	
