#include<stdio.h>
int main()
{

    int n,num,pos=-1;
    printf("Enter how many numbers in the array: \n");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Numbers you entered: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the number you want to search: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(num == arr[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos == -1)
        printf("Not Found");
    else
        printf("Position is: %d",pos);


    return 0;
}
