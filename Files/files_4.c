#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;

    file = fopen("test.txt","w");

    if(file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Please Enter your name: \n");
        gets(name);
        printf("Please Enter your age: \n");
        scanf("%d",&age);

        fprintf(file,"Name = %s\nage = %d",name,age);
        //fputs(name,file);
        //fputs("\n",file);
        printf("Written successfully \n");
    }


    return 0;
}

