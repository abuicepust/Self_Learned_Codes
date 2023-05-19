#include<stdio.h>
int main()
{
    int row1,col1,row2,col2,i,j,sum=0;
    printf("Enter the number of rows in the Matrix 1: ");
    scanf("%d",&row1);
    printf("Enter the number of columns in the Matrix 1: ");
    scanf("%d",&col1);
    int Matrix1[row1][col1];
    int Matrix2[row1][col1];
    printf("Enter the elements of Matrix 1: \n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("Matrix 1[%d][%d] = ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 1: \n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("\t%d ",Matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    for(i=0; i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            if( i == j)
            {
                sum += Matrix1[i][j];
            }
        }
    }
    printf("\nSum  = %d",sum);




    return 0;
}

