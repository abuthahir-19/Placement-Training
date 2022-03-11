#include <stdio.h>

int main()
{
    int *a, f[3];
    a = &f[0];
    a[0] = 7;
    a[1] = 6;
    a[2] = 10;
    for (int i = 0; i < 3;i++) {
        printf("%d ", i);
    }
    return 0;
}