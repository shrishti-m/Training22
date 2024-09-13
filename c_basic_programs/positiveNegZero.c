#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d", &n);

	if(n == 0)
	{
		printf("Zero\n");
	}
	else if(n > 0)
	{
		printf("positive\n");
	}
	else { printf("negative\n");
	}

	return EXIT_SUCCESS;
}
