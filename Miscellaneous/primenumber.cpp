#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=17,i=1,count=0,flag=0;
    while(1<100)
    {
        count=0;


        if(n == 0 || n==1)
            flag = 1;
        for(i=2; i<=n/2; i++)
        {
            if(n % i ==0)
            {
                flag = 1;
                break;
            }

        }
        if(count == 0)
        {
            cout<<i<<endl;
        }
    }
    if(flag == 0)
        cout<<"prime";
    else
        cout<<"Not";

}
