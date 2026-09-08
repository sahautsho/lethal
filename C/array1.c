#include <stdio.h>
int main()
{
    int a[100][100], i, j;
    printf("enter array elements\n");
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("Enter a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("Matrix is %d", a[i][j]);
        }
    }
    return 0;
}