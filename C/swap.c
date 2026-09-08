#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Before swapping the values are : a is %d and b is %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter swapping the values are : a is %d and b is %d", a, b);
    return 0;
}