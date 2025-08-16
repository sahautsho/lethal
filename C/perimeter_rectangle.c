#include <stdio.h>

int main()
{
    int a, b;
    printf("enter side a:");
    scanf("%d", &a);

    printf("enter side b:");
    scanf("%d", &b);

    printf("perimeter of a rectangle is : %d", 2 * (a + b));
    return 0;
}