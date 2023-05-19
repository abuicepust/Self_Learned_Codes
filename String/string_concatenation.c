#include<stdio.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter the string: \n");;
    scanf("%[^\n]%*c",&s1);
    printf("string s1 = %s\n",s1);
    printf("Enter the string: \n");;
    scanf("%[^\n]%*c",&s2);
    printf("string s2 = %s\n",s2);
    //strcat(s1,s2);

    //without strcat function
    //int len = strlen(s1) + strlen(s2);
    int len = strlen(s1);
    for(int i=0;i<=strlen(s2);i++)
    {
        s1[len+i] = s2[i];
    }
    printf("string concatenated = %s\n",s1);
    return 0;
}

