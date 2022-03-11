#include<stdio.h>

int main()
{
    int *a, b;
    b = 4;
    a = &b;
    *a = *a + 10;
    a = NULL;
    printf ("%d", b);
    a = &b;
    *a = *a + 6;
    printf ("\n%d", a[2]);
    return 0;
}