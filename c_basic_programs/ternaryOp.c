#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;

    printf("The maximum of %d and %d is %d\n", a, b, max);

    return 0;
}
