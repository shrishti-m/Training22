#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b, result;
	int op;
	printf("Enter any 2 numbers:\n");
	scanf("%d%d", &a, &b);
	printf("1.Add\n2.Subt\n3.Divide\n4.Multiplication\n");
	printf("Enter your choice:\n");
	scanf("%d", &op);

	switch(op)
	{
		case 1 : result = a + b; break;
		case 2 : result = a - b; break;
		case 3 : result = a / b; break;
		case 4 : result = a * b; break;
		default : printf("selected wrong choice\n");
	}
	printf("result = %d\n", result);
	return EXIT_SUCCESS;
}
