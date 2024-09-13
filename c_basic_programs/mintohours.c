#include <stdio.h>

#define MINUTES_IN_HOUR 60  

int main() {
    int totalMinutes;
    int hours, minutes;

    printf("Enter time in minutes: ");
    scanf("%d", &totalMinutes);

    hours = totalMinutes / MINUTES_IN_HOUR;  
    minutes = totalMinutes % MINUTES_IN_HOUR; 
    printf("%d minutes is equivalent to %d hours and %d minutes.\n", totalMinutes, hours, minutes);

    return 0;
}

