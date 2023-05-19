#include<stdio.h>

struct Person
{
    int age;
    double salary;
};

int main()
{
    struct Person person[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter the information for person %d: \n",i+1);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%lf",&person[i].salary);
    }
    for(int i=0;i<3;i++)
    {
        printf("Information for person %d: \n",i+1);
        printf("Age: %d\n",person[i].age);
        printf("Salary: %lf\n",person[i].salary);
        printf("Salary: %lf\n",person[i].salary);
    }

    return 0;
}

