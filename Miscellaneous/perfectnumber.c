#include<stdio.h>
int main()
{
    int n,n1,sum=0,rem,sum2=0,i;
    printf("Enter any integer number: ");
    scanf("%d",&n);
    n1=n;
    for(i=1;i<(n1-1);i++)
    {
        if(n1 % i == 0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    if(sum == n)
        printf("\nPerfect number");
    else
        printf("\nNot a perfect number");

}
