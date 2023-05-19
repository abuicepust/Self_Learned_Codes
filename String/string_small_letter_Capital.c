#include<stdio.h>
int main()
{
    char s1[100];
    printf("Enter the string: \n");
    scanf("%[^\n]%*c",&s1);
    printf("String = %s\n",s1);

    int i=0,small_letter=0,capital_letter=0,digit=0,other=0,space=0;

    while(s1[i] != '\0')
    {
        if(s1[i]>=65 && s1[i]<=90)
        {
            capital_letter++;
        }
        else if(s1[i]>=97 && s1[i]<=122)
        {
            small_letter++;
        }
        else if(s1[i]>=49 && s1[i]<=57)
        {
            digit++;
        }
        else if(s1[i] == 32)
        {
            space++;
        }
        else
        {
            other++;
        }

        i++;
    }
        printf("Capital Letter = %d\n",capital_letter);
        printf("Small Letter = %d\n",small_letter);
        printf("Digit = %d\n",digit);
        printf("Space = %d\n",space);
        printf("Other = %d\n",other);


    return 0;
}
