#include<stdio.h>
int main()
{
    int number,reverse=0,n1;
    printf("Enter the number: ");
    scanf("%d",&number);
    n1 = number;
    while(n1>0)
    {
        int reminder= n1 % 10;
        reverse = reverse * 10 + reminder;
        n1 = n1 / 10;
    }
    printf("Reverse is %d\n",reverse);
    if(reverse == number)
    {
        printf("This is a Palindrome Number");
    }
    else
        printf("Not a Palindrome number");
}
