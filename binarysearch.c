#include <stdio.h>
int main()
{
    int a[100], i, num, pos = -1, mid, beg, end, n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    beg = 0;
    end = n - 1;
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter no you want to search\n");
    scanf("%d", &num);
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (a[mid] == num)
        {
            pos = mid;
            break;
        }
        else if (a[mid] < num)
            beg = mid + 1;
        else
            end = mid - 1;
    }
    if (pos == -1)
    {
        printf("%d is not present in array \n", num);
    }
    else
    {
        printf("%d is found at %d position\n", num, pos);
    }
    printf("SAGAR PANWAR\n2100321530135 ");
}