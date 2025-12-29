#include <stdio.h>

int main()
{
    int e, d = 1;
    printf("enter e");
    scanf("%d", &e);
    printf("%d\n", e);
    printf("d is: %d\n", d);
    int a = 4 * 3 / 6 * 2; /*the operator precedence is as follows :- ()      *, /, %         +, -        =
    when there is operator of same precedence the compiler executes the operation from left to right*/
    printf("%d", a);
    return 0;
}