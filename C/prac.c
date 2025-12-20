#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    switch (marks)
    {

    case 91 ... 100:
        printf("Grade A");
        break;

    case 76 ... 90:
        printf("Grade B");
        break;

    default:
        printf("Invalid");
        break;
    }
    return 0;
}
