#include<stdio.h>
int main()
{
    FILE *file;
    char name[40];
    int age,phone,n,i;

    file = fopen("test.txt","a");

    if(file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter the number of student: \n");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            printf("Enter the name: \n");
            fflush(stdin);
            scanf("%[^\n]%*c",&name);

            printf("Enter the age: \n");
            scanf("%d",&age);

            printf("Enter the phone number: \n");
            scanf("%d",&phone);

            fprintf(file,"%s\t\t%d\t%d",name,age,phone);
            fputs("\n",file);
        }

        printf("Written successfully");
        fclose(file);
    }


    return 0;
}





