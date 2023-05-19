#include<stdio.h>
int main()
{
    int i,d,n;
    int isprime;
    printf("Enter the last number: ");
    scanf("%d",&n);
    int count=0;
    for(i=2; i<=n; i++)
    {
        isprime=1;
        for(d=2; d<i; d++)
        {
            if(i%d==0)
                isprime=0;
        }
        if(isprime != 0)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("Total= %d",count);
}

