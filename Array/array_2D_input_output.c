#include<stdio.h>
int main()
{
    int arr2d[2][2],i,j;
    printf("Enter the elements of the arr: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&arr2d[i][j]);
        }
    }
    printf("Your 2d array is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d ",arr2d[i][j]);
        }
        printf("\n");
    }

}
