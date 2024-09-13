#include <stdio.h>

int main() {
    int array[10];
    int i;
    int sum = 0;
    double average;

    // Read array elements from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    // Calculate the sum of the array elements
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    // Calculate the average
    average = (double)sum / 10;

    // Print the results
    printf("\nSum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}

