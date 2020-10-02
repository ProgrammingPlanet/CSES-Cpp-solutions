#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


int main()
{
    ll n,s,sv1=0;
    vector<ll> v1,v2;
    cin>>n;

    s = n*(n+1)/2;

    if(s%2 != 0)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        s /= 2;

        for(int i=n; i>0; i--)
        {
            if(sv1+i<=s)
            {
                v1.push_back(i);
                sv1 += i;
            }
            else
                v2.push_back(i);
        }

        cout<<v1.size()<<endl;
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }

        cout<<endl<<v2.size()<<endl;
        for(int i=0; i<v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }
    }
    
    return 0;
}