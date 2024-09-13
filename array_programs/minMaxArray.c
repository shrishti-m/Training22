#include <stdio.h>

int main() {
    int array[10];
    int i;
    int max, min;

    // Read array elements from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    // Initialize max and min to the first element
    max = min = array[0];

    // Find the maximum and minimum elements
    for (i = 1; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    // Print the results
    printf("\nMaximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

