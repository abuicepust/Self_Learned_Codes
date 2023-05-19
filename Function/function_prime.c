#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int result = PrimeOrNot(n);

    if(result==1)
        printf("Prime number");
    else
        printf("Not a Prime number");

    return 0;
}

int PrimeOrNot(int a)
{
    //int prime=1;
    for(int i=2;i<a;i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;

}
