#include <stdio.h>
int main()
{
    int n, i;
    long fact = 1;
    printf("Enter an integer:");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error: Factorial of a negative number does not exist\n");
        ;
    }
    else if (n == 0 || n == 1)
    {
        printf("Factorial of %d is %1d\n", n, fact);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d is %1d\n", n, fact);
    }
    return 0;
}