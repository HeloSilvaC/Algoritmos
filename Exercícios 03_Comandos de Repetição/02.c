#include <stdio.h>

void main()
{
    printf("DEC OCT HEX CHR\n");
    for (int i = 33; i <= 126; i++)
    {
        printf("%03d %03o %03X %c\n", i, i, i, i);
    }
}
