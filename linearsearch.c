#include <stdio.h>
int main()
{
    int a[100], i, num, c = 0, n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number to be searched \n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (num == a[i])
        {
            printf("%d is found at a[%d]\n", num, i);
            c++;
        }
    }
    if (c == 0)
        printf("Number is not present \n");

    
    printf("SAGAR PANWAR\n2100321530135 ");
    return 0;
}