#include<stdio.h>
int main()
{
    FILE *file;
    char name1[40];
    char name2[40];
    int age;

    file = fopen("test.txt","r");

    if(file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");


        fscanf(file,"%s %s",&name1,&name2);
        printf("%s %s",name1,name2);
        printf("\nFile is closed");
        fclose(file);
    }


    return 0;
}




