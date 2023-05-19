#include<stdio.h>
int main()
{
    char s1[30];
    //printf("Enter your full name: ");
    //scanf("%s",&s1);
    //printf("string s1 = %s\n",s1);
    //char s2[30];
    printf("Enter with space now: \n");
    //scanf("%[^\n]s",&s1);
    scanf("%[^\n]%*c",&s1);
    printf("string s2 = %s\n",s1);
    return 0;
}
