#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter principal amount:");
    scanf("%f", &p);
    printf("Enter rate:");
    scanf("%f", &r);
    printf("Enter time:");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("The simple interest will be: %.1f", si);
    return 0;
}