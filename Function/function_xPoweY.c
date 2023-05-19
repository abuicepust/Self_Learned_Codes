#include<stdio.h>

int PowerOf(int a, int b)
{

    int result = 1;
    for(int i=1; i<=b; i++)
    {
        result = result * a;
    }
    return result;
}

int main()
{
    int base,exp;
    printf("Enter the base of the power: \n");
    scanf("%d",&base);
    printf("Enter the exp of the power: \n");
    scanf("%d",&exp);

    int power = PowerOf(base,exp);
    printf("Power of %d to the power %d = %d\n",base,exp,power);

    return 0;
}



