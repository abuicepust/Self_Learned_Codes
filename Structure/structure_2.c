#include<stdio.h>

struct Person
{
    int age;
    double salary;
};

int main()
{
    struct Person person1,person2;

    printf("For person 1: \n");
    printf("Enter the age of person 1: ");
    scanf("%d",&person1.age);

    printf("Enter the salary of person 1: ");
    scanf("%lf",&person1.salary);


    //person1.age = 12;
    //person1.salary = 13890.512;

    printf("Person 1:\n");
    printf("Salary = %d\n",person1.age);
    printf("Salary = %.2lf\n",person1.salary);

    return 0;
}
