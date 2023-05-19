#include<stdio.h>

struct Person
{
    char name[30];
    int age;
    double salary;
};

int main()
{
    struct Person person[2];

    for(int i=0;i<2;i++)
    {
        printf("Enter the information for person %d: \n",i+1);
        printf("Enter name: ");
        fflush(stdin);
        scanf("%[^\n]s",&person[i].name);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%lf",&person[i].salary);
    }
    for(int i=0;i<2;i++)
    {
        printf("Information for person %d: \n",i+1);
        printf("Name: %s\n",person[i].name);
        printf("Age: %d\n",person[i].age);
        printf("Salary: %lf\n",person[i].salary);
    }

    return 0;
}

