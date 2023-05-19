#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\t",i);
    }
    printf("\nSum of the number = %d\n",sum);
    return 0;
}
