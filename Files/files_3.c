#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;

    file = fopen("test.txt","a");

    if(file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Please Enter your name: \n");
        gets(name);
        fputs(name,file);
        fputs("\n",file);
        printf("Written successfully \n");
    }


    return 0;
}
