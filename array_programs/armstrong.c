#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int originalNum;
	int sum=0;

	printf("Enter a positive interger:\n");
	scanf("%d", &n);

	if(n<=0)
	{
		printf("Enter positive integer only\n");
		return 1;
	}

	originalNum = n;

	//number of digits
	int temp=n;
	int numDigits=0;
	while(temp>0)
	{
		temp /= 10;
		numDigits++;
	}

	temp = n;

	//sum of digits raised to the power of the total number of digits
	while (temp > 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, numDigits);
        temp /= 10;
    }
	//compare sum to the original number to determine if it is an Armstrong number.
	if(sum == originalNum){
		printf("%d is an Armstrong number\n", originalNum);
	}
	else {
		printf("%d is not an Armstrong number\n", originalNum);
	}

	return 0;
}
