#include<stdio.h>
#define SQUARE(x)(x*x)    //((i++) * (i++))  So, 2 * 3 = 6

int main()
{
	int i=2;
	printf("%d\n", SQUARE(i));
	return 0;
}
