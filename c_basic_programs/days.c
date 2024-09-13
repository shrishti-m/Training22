#include <stdio.h>

#define DAYS_IN_WEEK 7  
int main() {
    int totalDays;
    int weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    weeks = totalDays / DAYS_IN_WEEK;  
	days = totalDays % DAYS_IN_WEEK;   

    printf("%d days are %d weeks, %d days.\n", totalDays, weeks, days);

    return 0;
}

