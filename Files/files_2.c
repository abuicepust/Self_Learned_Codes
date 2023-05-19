#include<stdio.h>

int main()
{
    FILE *f;
    char ch[20];
    printf("Enter the string: ");
    scanf("%[^\n]%*c",ch);
    int i;
    int len = strlen(ch);

    f = fopen("text.txt","a");

    if(f == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened");
        for(i=0;i<len;i++)
        {
            fputc(ch[i],f);
        }
        printf("\nFile writing is successful");
        fclose(f);
    }
}

