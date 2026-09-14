#include <stdio.h>

int main(void)
{
    int array[100];
    int size;
    int element;
    int position;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size < 0 || size >= 100)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int index = 0; index < size; index++)
    {
        scanf("%d", &array[index]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1-%d): ", size + 1);
    scanf("%d", &position);

    if (position < 1 || position > size + 1)
    {
        printf("Invalid position.\n");
        return 1;
    }

    for (int index = size; index >= position; index--)
    {
        array[index] = array[index - 1];
    }

    array[position - 1] = element;
    size++;

    printf("Array after insertion: ");
    for (int index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }
    printf("\n");

    return 0;
}
