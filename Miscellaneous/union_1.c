#include<stdio.h>

union test
{
    int x,y;
};


int main()
{
    union test p1,p2;
    p1.x = 10;
    printf("p2= %d",p1.y);
}
