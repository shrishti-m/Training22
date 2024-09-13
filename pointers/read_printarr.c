#include <stdio.h>

int main() {
    int i;
    int arr[5];
    int *p = arr;
    int **dp = &p; 

    printf("Enter 5 integers:\n");

    // Read array elements using pointer
    for (i = 0; i < 5; i++) {
        printf("Element %d:\n", i);
        scanf("%d", (p + i)); // Use pointer arithmetic to access array elements
    }

    printf("Print array elements:\n");

    for (i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(p + i)); 
    }

    return 0;
}

