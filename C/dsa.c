#include <stdio.h>

int main(void)
{
    int numbers[100];
    int count;
    int largest;

    printf("Enter the number of elements: ");
    scanf("%d", &count);

    if (count <= 0 || count > 100)
    {
        printf("Enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements: ", count);
    for (int index = 0; index < count; index++)
    {
        scanf("%d", &numbers[index]);
    }

    largest = numbers[0];
    for (int index = 1; index < count; index++)
    {
        if (numbers[index] > largest)
        {
            largest = numbers[index];
        }
    }

    printf("The largest element is %d.\n", largest);
    return 0;
}
