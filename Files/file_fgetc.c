#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    int age;

    file = fopen("test.txt","r");

    if(file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");

        while(!feof(file))
        {
            fgets(ch,39,file);
            printf("%s\n",ch);
        }
        printf("\nFile is closed");
        fclose(file);
        //fprintf(file,"Name = %s\nage = %d",name,age);
        //fputs(name,file);
        //fputs("\n",file);
        //printf("Written successfully \n");
    }


    return 0;
}



