#include <stdio.h>

struct emp {
    char name[1001];
    int age;
    int exp;
    int id;
};

int main()
{
    struct emp obj; // it will create one object or copy of the structure or instance of the structureṇ
    printf ("Enter the details of the employee : \n");
    printf ("Name : ");
    scanf ("%[^\n]%*c", obj.name);
    printf ("Age : ");
    scanf ("%d", &obj.age);
    printf ("Experience : ");
    scanf ("%d", &obj.exp);
    printf ("Employee ID : ");
    scanf ("%d", &obj.id);
    printf ("Employee Information : \n");
    printf ("Name : %s\n", obj.name);
    printf ("Age : %d\n", obj.age);
    printf ("Experience : %d\n", obj.exp);
    printf ("ID : %d", obj.id);
}