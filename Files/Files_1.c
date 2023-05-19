#include<stdio.h>

int main()
{
    FILE *f;

    f = fopen("text.txt","w");

    if(f == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is closed");
        fclose(f);
    }
}
