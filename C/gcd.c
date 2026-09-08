#include <stdio.h>
int main()
{
    int x, y, temp;
    printf("Enter two numbers:");
    scanf("%d %d", &x, &y);
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("GCD is : %d\n", x);
    return 0;
}
