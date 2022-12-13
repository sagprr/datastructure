// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int len = n*2 - 1;
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len;j++){
//             int min = i < j ? i : j;
//             min = min < len-i ? min : len-i-1;
//             min = min < len-j-1 ? min : len-j-1;
//             printf("%d ", n-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }
 
#include <stdio.h>
int main()
{
    int n, len, start, end;
    scanf("%d", &n);
    len = 2 * n - 1;
    start = 0;
    end = len - 1;
    int a[len][len];

    while (n != 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                {
                    a[i][j] = n;
                }
            }
        }
    
    ++start;
    --end;
    --n;
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}