#include<stdio.h>

void display(int a[])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int array[5] = {10,11,12,13,14};
    //int len = sizeof(array);
    int len = sizeof(array);
    printf("lem = %d ",len);

    display(array);


    return 0;
}
