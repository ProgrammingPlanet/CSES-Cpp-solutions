#include <iostream>
#include <vector>
using namespace std;
#define ll long long


int main()
{
    ll int i,n;
    cin>>n;

    if(n>4)
    {
        for(i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
    }
    else if(n==4)
    {
        cout<<"3 1 4 2";
    }
    else if(n==1)
    {
        cout<<"1";
    }
    else{
        cout<<"NO SOLUTION";
    }

    return 0;
}