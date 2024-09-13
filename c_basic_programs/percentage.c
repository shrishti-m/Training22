#include <stdio.h>

int main() {
    int percentage;
    
    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    switch (percentage / 10) {

        case 9:
            printf("Grade A\n");
            break;
        case 8:
            printf("Grade B\n");
            break;
        case 7:
            printf("Grade C\n");
            break;
        case 6:
            printf("Grade D\n");
            break;
        default:
            printf("Fail\n");
            break;
    }

    return 0;
}

