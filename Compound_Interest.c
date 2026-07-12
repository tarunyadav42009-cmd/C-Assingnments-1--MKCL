#include <stdio.h>
#include <math.h> 
int main() {
    float principle, rate, time, amount, compound_interest;

    
    printf("Enter Principle amount (P): ");
    scanf("%f", &principle);

    printf("Enter Time period in years (T): ");
    scanf("%f", &time);

    printf("Enter Rate of interest (R): ");
    scanf("%f", &rate);

    // CI Formula: A = P * (1 + R/100)^T
    amount = principle * pow((1 + rate / 100), time);
    compound_interest = amount - principle;

    
    printf("\nTotal Amount after %.2f years: %.2f\n", time, amount);
    printf("Compound Interest earned: %.2f\n", compound_interest);

    return 0;
}
