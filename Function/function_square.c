#include<stdio.h>

int square(int a)
{
    //printf("square of the number is %d\n",a*a);
    return a*a;
}

int main()
{
    int num1,num2;
    printf("Enter the number 1: \n");
    scanf("%d",&num1);
    //printf("Enter the number 2: \n");
    //scanf("%d",&num2);

    int result = square(num1);
    printf("Square of the numbers: %d",result);

    return 0;
}

