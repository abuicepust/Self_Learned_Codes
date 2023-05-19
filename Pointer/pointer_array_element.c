#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6};

    int *ptr;



    //printf("Value of a[3] = %d\n",a[3]);
    //printf("Value of a[3] = %d\n",ptr);
    //printf("Value of a[3] = %d\n",*ptr);
    int len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++)
    {
        ptr = &a[i];
        printf("%d ",*ptr);
        //ptr++;
    }

}
