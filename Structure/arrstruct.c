#include <stdio.h>
#include <stdlib.h>

struct emp {
    char name[1001];
    int age;
    int exp;
    int id;
};

int main()
{
    int n;
    scanf ("%d", &n);
    struct emp e[n];
    printf ("Enter the employee information one by one : ");
    for (int i = 0; i < n; i++) {
        printf ("Employee Name : ");
        scanf ("%[^\n]", e[i].name);
        printf ("Age : ");
        scanf ("%d", &e[i].age);
        printf ("Experience : ");
        scanf ("%d", &e[i].exp);
        printf ("ID : ");
        scanf ("%d", &e[i].id);
        printf ("\n");
    }    
    printf ("Information about the employees : ");
    for (int i = 0; i < n; i++) {
        printf ("\nEmployee Name : %s",e[i].name);
        printf ("\nAge : %d", e[i].age);
        printf ("\nExperience : %d", e[i].exp);
        printf ("\nID : %d", e[i].id);
        printf ("\n\n");
    }
}