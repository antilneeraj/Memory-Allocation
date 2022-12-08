#include <stdio.h>
struct segment
{
    int sno, base, length;
} seg[10];
void main()
{
    int i, n, offset, k, j, laddr, val, segno;
    printf("\n Enter the number of Segments : \n");
    scanf("%d", &n);
    printf("\n Enter the segno,Base,Limit : \n");
    printf("Segno \t Base \tLimit\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d", &seg[i].sno, &seg[i].base, &seg[i].length);
    }
    printf("Enter the Logical Address\n");
    scanf("%d", &laddr);
    offset = 0;
    i = 0;
    while (1)
    {
        if (laddr < 10)
        {
            segno = laddr;
            break;
        }
        val = 1;
        for (j = 0; j < i; j++)
            val = val * 10;
        offset = offset + ((laddr % 10) * val);
        laddr = laddr / 10;
        i++;
    }
    k = 1;
    for (i = 0; i < n; i++)
    {
        if ((seg[i].length > offset) && (seg[i].sno == segno))
            k = 0;
        printf("The Physical Address is %d \n", seg[i].base + offset);
        break;
    }
    if (k == 1)
        printf("Page Fault \n");
}