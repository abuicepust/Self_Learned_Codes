#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter the year: "<<endl;
    int year;
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not a leap year";
    }

    getch();
}
