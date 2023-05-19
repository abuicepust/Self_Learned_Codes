#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==5)
            {
                break;
            }
            cout<<"Value of j: "<<j<<endl;
        }
        cout<<"Value of i: "<<i<<endl;
    }
}
