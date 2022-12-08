#include <stdio.h>

void main()
{
    int p, n, b[50], i, j, t;
    printf("\n enter the number of unallocated space");
    scanf("%d", &n);
    printf("\n enter the allocated memory space");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n memory space required for given process");
    scanf("%d", &p);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (b[i] < b[j])
            {
                t = b[j];
                b[j] = b[i];
                b[i] = t;
            }
        }
    }
    if (b[0] >= p)
    {
        printf("Worst fit of the given process is %d", b[0]);
    }
    else
    {
        printf("The process does not fit it to any free memory");
    }
}