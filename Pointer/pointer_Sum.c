#include<stdio.h>

int main()
{
    int x=5,y=10,z=30,sum;
    int *ptr1,*ptr2;

    ptr1 = &x;
    printf("Value of x = %d\n",*ptr1);

    ptr2 = &y;
    printf("Value of y = %d\n",*ptr2);

    sum = *ptr1 + *ptr2;
    printf("Value of sum = %d\n",sum);

    getch();
}


