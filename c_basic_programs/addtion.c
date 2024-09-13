#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a = 21;
	 int b = 31;
     int ret_val;

	 ret_val = printf("The sum of %d and %d is %d\n",a, b, a+b);
	 
//handling error handling 

	 if(ret_val<0)
	 {
	      printf("Error while printing\n");
		  return EXIT_FAILURE;
	}
	printf("Success");
	return EXIT_SUCCESS;
}
