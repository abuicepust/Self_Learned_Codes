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
    //int j=0,i=0;
    //int len = strlen(s1);
    //i=0;
    //for(i=len-1,j=0; i>=0; i--,j++)
    //{
        //s2[j] = s1[i];
    //}
    //s2[j]='\0';

   // printf("string s2 = %s\n",s2);


    printf("Enter the string: \n");;
    scanf("%[^\n]%*c",&s2);
    printf("string s2 = %s\n",s2);
    char temp[30];
    //strcat(s1,s2);

    //Swapping
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    printf("\nstring s1 = %s\n",s1);
    printf("\nstring s2 = %s\n",s2);

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



