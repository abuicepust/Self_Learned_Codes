#include<stdio.h>

void max(int a[])
{
    int len = sizeof(a);
    int maximum = a[0];
    for(int i=0; i<=len; i++)
    {
        if(maximum<a[i])
        {
            maximum = a[i];
        }
    }
    printf("Maximum = %d",maximum);
}
int main()
{
    int array[] = {10,11,12,13,14};
    //int len = sizeof(array);

    max(array);


    return 0;
}

