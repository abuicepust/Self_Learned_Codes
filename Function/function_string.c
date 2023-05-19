#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter the string: ");
    scanf("%[^\n]%*c",&s1);
    display(s1);

    return 0;
}
void display(char a[])
{
    int i=0;
    while(a[i] != '\0')
    {
        printf("%c\n",a[i]);
        i++;
    }
}
