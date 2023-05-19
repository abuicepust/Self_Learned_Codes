#include<stdio.h>
int main()
{
    int i,j,n1,n2;
    printf("Enter the number of rows: ");
    scanf("%d",&n1);
    printf("Enter the number of columns: ");
    scanf("%d",&n2);
    int Matrix1[n1][n2];
    int row = n1;
    int col = n2;
    printf("Enter the elements of Matrix 1: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Matrix 1[%d][%d] = ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
        printf("\n");
    }
    int Matrix2[n1][n2];
    printf("Enter the elements of Matrix 2: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Matrix 2[%d][%d] = ",i,j);
            scanf("%d",&Matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix 1: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d ",Matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix 2: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d ",Matrix2[i][j]);
        }
        printf("\n");
    }

    int Addition[n1][n2];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            Addition[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }

    printf("\n");
    printf("Addition Matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d ",Addition[i][j]);
        }
        printf("\n");
    }

    return 0;
}
