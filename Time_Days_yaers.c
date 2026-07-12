#include <stdio.h>

int main() {
    int total_days, years, weeks, days;

   
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    
    years = total_days / 365;

    
    weeks = (total_days % 365) / 7;
    

    days = (total_days % 365) % 7;

    
    printf("%d days is equal to:\n", total_days);
    printf("%d Years, %d Weeks, and %d Days\n", years, weeks, days);

    return 0;
}
