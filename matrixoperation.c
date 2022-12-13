#include <stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], b[10][10];
    int arr[10][10];

    printf("Please Enter Number of rows and columns :\n");
    scanf("%d %d", &i, &j);

    printf("Please Enter the First Elements\n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }

    printf("Please Enter the Second Elements\n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &b[rows][columns]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            arr[rows][columns] = a[rows][columns] + b[rows][columns];
        }
    }

    printf("Sum of Two matrixes are : \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            printf("%d \t", arr[rows][columns]);
        }
        printf("\n");
    }
    printf("SAGAR PANWAR\n2100321530135 ");
    return 0;
}