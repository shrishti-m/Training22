#include<stdio.h>
#define PI 3.14 

int main()
{
     int radius = 2;
   	 float area = PI * radius * radius;
	 float circum = 2 * PI * radius;
	 printf("Area of circle: %f\n",area);
	 printf("Circum of circle: %f\n", circum);

	 return 0;
}
