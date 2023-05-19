/*
1-D array input output
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers in the array: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Array numbers: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",marks[i]);
    }
    return 0;
}
