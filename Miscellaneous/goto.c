#include<stdio.h>
int main()
{
    int n;
    printf("Hello world");
    goto A;
    printf("Hello world2");
    printf("Hello world3");
    A:
        printf("\nHello world Goto");

    return 0;

}
