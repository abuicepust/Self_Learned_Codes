#include<bits/stdc++.h>
using namespace std;

bool PrimeOrNot(int a)
{
    //int prime=1;
    for(int i=2;i<a;i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int result = PrimeOrNot(n);

    if(result==1)
        printf("Prime number");
    else
        printf("Not a Prime number");

    return 0;
}


