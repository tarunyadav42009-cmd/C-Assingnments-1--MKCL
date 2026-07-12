#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;

    printf("Before swap: a = %d, b = %d\n", a, b);

   
    temp = a;    
    a = b;       
    b = temp;    

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
/* 
Another Methiod to swap two numbers without using a temporary variable:
#include <stdio.h>

int main() {
    int a = 30, b = 60;

    printf("Before swap: a = %d, b = %d\n", a, b);

    
    a = a + b;   
    b = a - b;   
    a = a - b;   

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
*/
