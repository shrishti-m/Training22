#include<stdio.h>

int main()
{
     int a;
	 int b;
	 int c;
	 printf("enter values of a, b, c:\n");
     scanf("%d %d %d", &a, &b, &c);

	 int max = (a > b)
	           ? ((a>c) ? a : c)
			   : ((b>c) ? b : c);

	 printf("The max among %d, %d and %d is %d\n", a,b,c,max);

	 return 0;
}
