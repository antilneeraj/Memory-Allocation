#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int l, g, b, j, s[10], i, n, f[5] = {0, 0, 0, 1, 0}, st[5] = {101, 201, 301, 401, 501};
    int en[5] = {200, 300, 400, 500, 600};
    char con[10][20];
    printf("\n Enter the number of pages in Process");
    scanf(" %d", &n);
    printf("\n Enter the content of each page");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &con[i]);
    }
    printf("\n Before the Allocation: ");
    for (i = 0; i < n; i++)
    {
        if (f[i] == 1)
            printf("\n %d \t Full %d", st[i], en[i]);
        else
            printf("\n %d \t Free %d", st[i], en[i]);
    }
    printf("\n After Allocation: ");
    printf("\n main memory \t free holes \t\t after allocation");
    for (i = 0; i < n; i++)
    {
        l = 0;
        l = strlen(con[i]);
        g = 0;
        for (j = 0; j < n; j++)
        {
            if (f[j] != 1)
            {
                b = st[j] + 1;
                printf("\n page %d \t %d %s %d", i + 1, st[i], con[i], b);
                printf("\t\t %d - %d", b, en[j]);
                g = 1;
                f[j] = 1;
                break;
            }
        }
        if (g == 0)
            printf("\n No Free Frames are available for Page %d", i + 1);
    }

    for (i = 0; i < n; i++)
    {
        if (f[j] == 0)
        {
            printf(" \n \t \t %d - %d ", st[i], en[i]);
        }
    }
}