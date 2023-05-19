/*
1
1 0
1 0 1

*/
#include<stdio.h>
int main()
{
    int row,column,n;
    printf("Enter number of n: ");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(column=1;column<=row;column++)
        {
            printf("%c ",column+64);
        }
        printf("\n");
    }


    return 0;
}
