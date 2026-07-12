#include <stdio.h>

int main() {

    double num;
    
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    if (num > 0.0) {
        printf("%.2lf is a positive number.\n", num);
    } 
    else if (num < 0.0) {
        printf("%.2lf is a negative number.\n", num);
    } 
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
