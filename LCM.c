#include <stdio.h>

int main()
{

    int n1, n2, max;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // Converting negative inputs to positive
    if (n1 < 0)
        n1 = -n1;
    if (n2 < 0)
        n2 = -n2;

    // The minimum possible LCM is the larger of the two numbers
    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }

    // Loop until a number divisible by both n1 and n2 is found
    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("LCM is %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
