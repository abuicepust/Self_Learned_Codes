/*
I have to construct this pattern
1
1 2
1 2 3
*/

#include<stdio.h>
int main()
{
    int n,r,c;
    printf("Enter the number n: ");
    scanf("%d",&n);
    int a=65;
    for(r=1;r<=n;r++)
    {

        for(c=1;c<=r;c++)
        {
            printf("%c\t",a);a++;
        }

        printf("\n");
        a=65;

    }


    return 0;
}
