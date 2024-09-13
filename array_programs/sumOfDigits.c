#include<stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer from 1-10\n");
    scanf("%d", &n);
    int sum=0;

    if(n<=0)
    {
        printf("number must be positive\n");
        return 1;
    }

    while(n>0)
    {
        sum += n % 10;
        n/=10;
    }

    printf("The sum of digits is:%d\n", sum);
    return 0;
}

