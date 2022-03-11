#include <stdio.h>

int main() 
{
    int **t, *a, p;
    p = 10;
    a = &p;
    t = &a;
    printf ("%d", **t);
    return 0;
}