#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the 2 integer number: ");
    scanf("%d %d",&num1,&num2);
    printf("Number 1 is: %d\nNumber 2 is %d\n",num1,num2);
    //num1=num1-num2;
    //num2=num1+num2;
    //num1=num2-num1;
    num1= num1^num2;
    num2= num1^num2;
    num1= num1^num2;
    printf("number 1 is: %d\n",num1);
    printf("number 2 is: %d\n",num2);
    return 0;
}
