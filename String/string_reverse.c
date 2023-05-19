#include<stdio.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter the string: \n");;
    scanf("%[^\n]%*c",&s1);
    printf("string s1 = %s\n",s1);
    //strrev(s1);
    //printf("string s1 = %s\n",s1);

    //without strrev
    int j=0,i=0;
    int len = strlen(s1);
    i=0;
    for(i=len-1,j=0; i>=0; i--,j++)
    {
        s2[j] = s1[i];
    }
    s2[j]='\0';

    printf("string s2 = %s\n",s2);
    int count = 0;
    int len1=strlen(s1);
    int len2=strlen(s2);
    for(i=0; i<=len1; i++)
    {
        if(s1[i] == s2[i])
        {
            count=0;
        }
        else
            count++;
    }
    if(count == 0)
        printf("Palindrom");
    else
        printf("Not A Palindrom");

    //printf("Enter the string: \n");;
    //scanf("%[^\n]%*c",&s2);
    //printf("string s2 = %s\n",s2);
    //strcat(s1,s2);

    //without strcat function
    //int len = strlen(s1) + strlen(s2);
    //int len = strlen(s1);
    //for(int i=0;i<=strlen(s2);i++)
    //{
    //  s1[len+i] = s2[i];
    //}
    //printf("string concatenated = %s\n",s1);
    return 0;
}


