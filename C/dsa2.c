// Traverse and print the elements of an array.
#include <stdio.h>

int main(void)
{
    int array[100];
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int index = 0; index < size; index++)
    {
        scanf("%d", &array[index]);
    }

    printf("Array elements: ");
    for (int index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }

    return 0;
}
