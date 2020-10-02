#include<iostream>
#include<climits>
using namespace std;

typedef long long ll;


#include<map>

int main()
{
    map<ll,ll> m;
    ll n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(m.count(x)==0)
            m[x] = 1;
        else
            m[x]++;
    }
    cout<<m.size();
}