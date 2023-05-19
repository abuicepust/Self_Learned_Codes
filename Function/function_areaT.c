#include<stdio.h>

double areaOfTriangle(double a,double b)
{
    //printf("square of the number is %d\n",a*a);
    double area = 0.5*a*b;
    return area;
}

int main()
{
    double base,height;
    printf("Enter the base of the triangle: \n");
    scanf("%lf",&base);
    printf("Enter the height of the triangle: \n");
    scanf("%lf",&height);

    double result = areaOfTriangle(base,height);
    printf("Area of the Triangle: %.2lf\n",result);

    return 0;
}


