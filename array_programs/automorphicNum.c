#include<stdio.h>
#include<math.h>

int main()
{
	int n, square, numDigits, divisor, lastDigits;

	printf("Enter a number:\n");
	scanf("%d", &n);

	//square of number
	square = n * n;

	//number of digits
	int temp=n;
	numDigits=0;
	while(temp>0)
	{
		temp/=10;
		numDigits++;
	}

	//extracting the last 2 digits
	divisor = pow(10,numDigits);

    lastDigits = square % divisor;

	//compare extracted values
	if(lastDigits == n){
		printf("Number is automorphic\n");
	}
	else {
		printf("Number is not automorphic\n");
	}

	return 0;
}

