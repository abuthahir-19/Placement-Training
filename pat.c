#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int main()
// {
//     int n;
//     scanf ("%d", &n);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf ("* ");
//         }
//         printf ("\n");
//     }
// }

// int main() 
// {
//     for (int i = 1; i <= 4; i++) {
//         for (int j = 1; j <= 4; j++) {
//             printf ("%d ", i);
//         }
//         printf ("\n");
//     }
// }




// int length (int val) {
//     int c = 0;
//     while (val != 0) {
//         c++;
//         val /=10;
//     }
//     return c;
// }

// int main() 
// {
//     int inp;
//     scanf ("%d", &inp);
//     int temp = inp;
//     int count = length  (inp), sum = 0;
//     while (inp != 0) {
//         sum += pow (inp % 10, count);
//         inp /= 10;
//     }
//     if (temp == sum) printf ("Amstrong Number");
//     else printf ("Not an amstrong number");
//     return 0;
// }

// int main() 
// {
//     for (int i = 1; i <= 4; i++) {
//         if (i == 4) {
//             printf ("%d", i);
//         }else printf ("%d,",i);
//     }
// }



// int isPerfectSquare (int value) {
//     int v = floor (sqrt (value));
//     if (v*v == value) return 1;
//     else return 0;
// }

// int main() 
// {
//     int start, end;
//     scanf ("%d %d", &start, &end);
//     for (int i = start; i < end; i++) {
//         if (isPerfectSquare (i)) {
//             printf ("%d ", i);
//         }
//     }
// }



// int main() 
// {
//     int n, m, count = 0;
//     scanf ("%d %d", &n, &m);
//     for (int i = 1; i <= n; i++) {
//         if (count == m) {
//             printf ("#");
//             count = 0;
//         }
//         printf ("*");
//         count++;
//     }
// }

// int main()
// {
//     int n;
//     scanf ("%d", &n);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf ("* ");
//         }
//         printf ("\n");
//     }
// }

// int main()
// {
//     int n;
//     scanf ("%d", &n);
//     for (int i = 1; i <= n; i++) 
//     {
//         for (int j = 1; j <= n; j++) {
//             if (i == 1 || i == n || j == 1 || j == n) {
//                 printf ("* ");
//             }
//             else printf ("  ");
//         }
//         printf ("\n");
//     }
// }


// int main()
// {
//     int n;
//     scanf ("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             if (i % 2 != 0) {
//                 printf ("*");
//             }
//             else {
//                 printf ("#");
//             }
//         }printf ("\n");
//     }
// }

int main()
{
    int *p ;
    p = (int*) malloc (sizeof(int));
    printf ("%x", p[0]);
    printf ("\n%x", p[1]);
    return 0;
}