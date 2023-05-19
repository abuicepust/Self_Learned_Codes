/*
  1
 1 2
1 2 3
 1 2
   1
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            printf(" ",row);
        }
        for(int col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}

