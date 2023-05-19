#include<stdio.h>

int main()
{
    int x=5;
    printf("Value of x = %d\n",x);
    printf("Value of x = %u\n",&x);
    int *ptr;

    ptr = &x;
    printf("Value of the = %d\n",ptr);
    printf("Value of the = %d\n",*ptr);
    printf("Value of the = %d\n",&ptr);
    getch();
}
