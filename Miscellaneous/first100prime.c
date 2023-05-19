#include<stdio.h>
int main()
{

    int i,j,isprime,count=0, num=0;
    for(i=2; count<25; i++)
    {
        isprime=0;
        for(j=2; j<i; j++)
        {
            if(i % j == 0)
            {
                isprime++;
                break;
            }
        }
        if(isprime == 0)
        {
            printf("%d\t",i);
            num += 1;count++;
        }

    }
    printf("\n%d\n", num);
    return 0;

}
