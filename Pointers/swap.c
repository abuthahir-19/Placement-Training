#include <stdio.h>

void swap (int *x, int *y) {
    int k = *x;
    *x = *y;
    *y = k;
}

int main()
{
    int a, b;
    a = 2;
    b = 3;
    printf ("value of a and b before swapping: %d %d\n", a, b);
    swap (&a, &b);
    printf ("value of a and b after swapping : %d %d", a, b);
    return 0;
}