#include<stdio.h>
int main()
{
    int row1,col1,row2,col2,i,j;
    printf("Enter the number of rows in the Matrix 1: ");
    scanf("%d",&row1);
    printf("Enter the number of columns in the Matrix 1: ");
    scanf("%d",&col1);
    printf("Enter the number of rows in the Matrix 2: ");
    scanf("%d",&row2);
    printf("Enter the number of columns in the Matrix 2: ");
    scanf("%d",&col2);
    int Matrix1[row1][col1];
    int Matrix2[row2][col2];
    if(col1 == row2)
    {
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
        printf("Enter the elements of Matrix 2: \n");
        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("Matrix 2[%d][%d] = ",i,j);
                scanf("%d",&Matrix2[i][j]);
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
        printf("Matrix 2: \n");
        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("\t%d ",Matrix2[i][j]);
            }
            printf("\n");
        }

        int Multiplication[row1][col2];
        int sum=0,k=0;
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                for(k=0; k<col2; k++)
                {
                    sum = sum + (Matrix1[i][k] * Matrix2[k][j]);
                }
                Multiplication[i][j] = sum;
                sum=0;
            }
        }

        printf("\n");
        printf("Multiplicated Matrix: \n");
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("\t%d ",Multiplication[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Matrix Addition");
    }



    return 0;
}
