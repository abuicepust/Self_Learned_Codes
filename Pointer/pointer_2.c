#include<stdio.h>

int main()
{
    int x=5,y=10,z=30;
    int *ptr;

    ptr = &x;
    printf("Value of x = %d\n",*ptr);

    ptr = &y;
    printf("Value of y = %d\n",*ptr);

    ptr = &z;
    printf("Value of z = %d\n",*ptr);

    getch();
}

