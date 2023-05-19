#include<stdio.h>
int main()
{
    int number1,number2,i,gcd,n1,n2;
    printf("Enter two integer: ");
    scanf("%d %d",&number1,&number2);
    n1=number1;
    n2=number2;
    for(i=1; i<=n1 && i<=n2; i++)
    {
        if(n1 % i== 0 && n2 % i == 0)
        {
            gcd=i;
        }
    }
    printf("GCD = %d\n",gcd);
}
