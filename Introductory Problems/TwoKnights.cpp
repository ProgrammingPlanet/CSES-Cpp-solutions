#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll calc(ll k)
{
    return (
              k*k*(k*k - 1)
            - 4*2
            - 8*3
            - (k-4)*4*4
            - 4*4
            - (k-4)*6*4
            - (k-4)*(k-4)*8
        )
        /2;
}

int main()
{
    ll n;
    cin>>n;
    
    for(ll i=1; i<=n; i++)
    {
    	cout<<calc(i)<<endl;
    }
    
    return 0;
}