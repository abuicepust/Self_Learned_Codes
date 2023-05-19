#include<stdio.h>

void swap(int *p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("Value of x = %d\n",*p1);
    printf("Value of y = %d\n",*p2);
}

int main()
{
    int x=5,y=10,z=30;
    int *ptr1,*ptr2;

    ptr1 = &x;
    printf("Value of x = %d\n",*ptr1);

    ptr2 = &y;
    printf("Value of y = %d\n",*ptr2);


    swap(&x,&y);

    getch();
}




