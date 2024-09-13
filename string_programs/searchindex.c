#include<stdio.h>

int main()
{
	int n, arr[n], i, key;
	printf("Enter size of array:\n");
	scanf("%d", &n);

	printf("Enter elements: \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be searched in array:\n");
	scanf("%d", &key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Element found at %d index\n", i);
			break;
		}
	}
	if(arr[i] != key)
    {
        printf("Element not found\n");
    }



	return 0;
	
}

