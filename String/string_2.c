#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter with space now: \n");
    scanf("%[^\n]s",&s1);
    printf("Size of : %d\n",strlen(s1));
    printf("string s2 = %s\n",s1);
    for(int i=0;i<=strlen(s1);i++)
    {
        if(s1[i]== ' ')
        {
            continue;
        }
        printf("%c",s1[i]);
        printf("\n");
        if(s1[i]== '\0')
        {
            break;
        }
    }
    return 0;
}

