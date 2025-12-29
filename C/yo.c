#include <stdio.h>
#include <math.h>
/*c basic program*/
int main()
{
    int age = 19;
    char star = '*';
    float pi = 3.14;
    printf("age is %d\n", age);
    printf("symbol is %c\n", star);
    printf("value of pi is %f\n", pi);
    int x = 2;
    int y = 3;
    int answer = pow(x, y); // to find the power use the function pow and use #include<math.h>
    printf("the answer is %d\n", answer);
    printf("%d", -3 % 2); /*modulus always works only with int, neither float nor char and the answer only comes in negative
    only when the first operand is in negative, the sign of the second operand does not have any effect
    (in other words only when the numerator is negative)*/
    return 0;
}