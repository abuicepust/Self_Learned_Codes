#include<stdio.h>
int main()
{
    int n,i,a=1;
    float sum=0;
    printf("Enter the last number n: ");
    scanf("%d",&n);
    printf("1+1/2+1/3+.....1/%d =\t",n);
    for(i=1;i<=n;i++)
    {
        sum = sum + 1/(float)i;
    }
    printf("%f",sum);
}
