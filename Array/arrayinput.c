#include<stdio.h>
int main()
{
    int marks[10],i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d\n",i+1);
        scanf("%d",&marks[i]);
        printf("The number you entered: %d\n",marks[i]);
    }
    printf("The numbers are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",marks[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    printf("\nSum = %d\n",sum);
    int avg;
    avg = sum/n;
    printf("Average = %d\n",avg);
    return 0;
}
