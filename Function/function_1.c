#include<stdio.h>

void sum(int a,int b)
{
    printf("sum is %d\n",a+b);
}

int sub(int a,int b)
{
    return a-b;
}
int main()
{
    int num1,num2;
    printf("Enter the number 1: \n");
    scanf("%d",&num1);
    printf("Enter the number 2: \n");
    scanf("%d",&num2);

    sum(num1,num2);
    printf("Sub of the numbers: %d",sub(num1,num2));

    return 0;
}
