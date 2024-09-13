#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int closestSquare;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number must be positive.\n");
        return 1;
    }

    int sqrtN = (int)sqrt(n);

    int lowerSquare = sqrtN * sqrtN;
    int upperSquare = (sqrtN + 1) * (sqrtN + 1);

    if (n - lowerSquare <= upperSquare - n) {
        closestSquare = lowerSquare;
    } else {
        closestSquare = upperSquare;
    }

    printf("The closest integer with a square root is: %d\n", closestSquare);

    return 0;
}

