#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);


    //for(int i=n; i>=1; i++)
    //{
    //fact = fact * i;
    //}
    printf("Factorial = %d",fact(n));
    return 0;
}
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}

