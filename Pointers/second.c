#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, *b, c;
    c = 3;
    a = &c;
    b = &c;
    *b = *b + 4;
    b = NULL;
    *a = *a + 2;
    printf ("%d", c);
    return 0;
}