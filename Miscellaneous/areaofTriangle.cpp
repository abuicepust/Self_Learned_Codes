#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter the value of Height(Triangle): ";
    double height;
    cin>>height;
    cout<<"Height you entered: "<<height<<endl;
    cout<<"Enter the value of Base(Triangle): ";
    double base;
    cin>>base;
    double area = 0.5*height*base;
    cout<<"Area of the Triangle: "<<area;
    getch();
}
