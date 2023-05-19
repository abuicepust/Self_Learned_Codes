#include<stdio.h>

int main()
{
    int x=5,y=10,z=30,temp;
    int *ptr1,*ptr2;

    ptr1 = &x;
    printf("Value of x = %d\n",*ptr1);

    ptr2 = &y;
    printf("Value of y = %d\n",*ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Value of x = %d\n",*ptr1);
    printf("Value of y = %d\n",*ptr2);

    getch();
}



