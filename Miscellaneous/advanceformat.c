#include<stdio.h>
int main()
{
    int i,n;
    char txt[50];
    printf("Enter the text: ");
    scanf("%[^\n]",&txt);
    printf("How many times to display? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s \n",txt);
    }
}
