#include <stdio.h>

int main()
{
    int n, numbers, i = 0, Sum = 0;
    float Average;

    printf("Enter the number of Students\n");
    scanf("%d", &n);

    printf("Enter the marks of the students\n");
    while (i < n)
    {
        scanf("%d", &numbers);
        Sum = Sum + numbers;
        i++;
    }

    Average = Sum / n;

    printf("Average marks of the %d Students = %f\n", n, Average);
    printf("SAGAR PANWAR\n2100321530135 ");

    return 0;
}