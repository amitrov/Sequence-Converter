#include <stdio.h>

#define DAYS_IN_WEEK 7  // Symbolic constant for number of days in a week

int main() {
    int days, weeks, remaining_days;
    
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate weeks and remaining days
    weeks = days / DAYS_IN_WEEK;
    remaining_days = days % DAYS_IN_WEEK;

    // Display the result
    printf("%d days is equivalent to %d weeks and %d days.\n", days, weeks, remaining_days);

    return 0;
}
