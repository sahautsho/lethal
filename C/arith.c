#include <stdio.h>
int main()
{
    int x, y, result;
    char op;
    printf("Enter the numbers:\n");
    scanf("%d %d", &x, &y);
    while (1)
    {
        printf("Enter an arithmetic operator(+,-,*,/) or press 'q' to quit:\n");
        scanf("%c", &op);
        if (op == 'q')
        {
            printf("Exiting program\n");
            break;
        }
        switch (op)
        {
        case '+':
            result = x + y;
            printf("Result is %d + %d=%d\n", x, y, result);
            break;
        case '-':
            result = x - y;
            printf("Result is %d - %d=%d\n", x, y, result);
            break;
        case '*':
            result = x * y;
            printf("Result is %d * %d=%d\n", x, y, result);
            break;
        case '/':
            if (y != 0)
            {
                result = x / y;
                printf("Result is %d/%d =%d\n", x, y, result);
            }
            else
            {
                printf("Error: Division by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid Operator. Press +,-,*,/ or 'q' to quit");
        }
    }
    return 0;
}