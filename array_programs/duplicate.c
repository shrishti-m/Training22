#include<stdio.h>
int main()
{
	int n, arr[n],dup[50];

	printf("Enter size of array \n");
	scanf("%d", &n);

	printf("Enter elements: \n");
	
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		dup[i] = -1;
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] == arr[j]){
				for(int k = j ; k<n ; k++){
					arr[k] = arr[k+1];
				}
				j--;
				n--;
			}
		}
	}

	printf("Final elements after removing duplicates: ");
	for(int i=0;i<n;i++){
		printf("%d", arr[i]);
	}

	return 0;
}



