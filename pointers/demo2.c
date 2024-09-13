//void expressions can't be de-refrenced so typecasting is done

#include<stdio.h>

int main()
{
	void *ptr;
	int a = 5;
	float b =12.5;

	ptr = &a;
	printf("The address of a %u\n", ptr);
//	printf("The value of a %u\n", *ptr);// void expressions can't be de-refrenced
	printf("The value of a %u\n", *((int *)ptr)); //that's why typecasting is done

	ptr = &b;
	//*ptr = 13.4; //if  *ptr was not void then it would be possible
	*((float *)ptr) = 13.4;
	printf("b = %f\n",b);
	return 0;
}
