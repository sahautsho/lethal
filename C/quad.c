#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, root1, root2, real, imag;
    printf("Enter the value of coefficients a,b,c in a single line with space\n");
    scanf("%f %f %f", &a, &b, &c);
    d = ((b * b) - (4 * a * c));
    if (d == 0)
    {
        printf("The roots are real and equal\n");
        root1 = root2 = ((-b) / 2 * a);
        printf("root1=root2 is %.3f\n", root1);
    }
    if (d > 0)
    {
        printf("The roots are real and distinct\n");
        root1 = (((-b) + sqrt(d)) / (2 * a));
        root2 = (((-b) - sqrt(d)) / (2 * a));
        printf("root1 is %.3f and root2 is %.3f", root1, root2);
    }
    else
    {
        printf("The roots are real and imaginary\n");
        real = ((-b) / 2 * a);
        imag = sqrt(fabs(d) / (2 * a));
        printf("root1 is %.3f + i %.3f\n", root1);
        printf("root2 is %.3f + i %.3f\n", root2);
    }
    return 0;
}