#include <iostream>
#include <vector>
using namespace std;
#define ll long long


int main()
{
    ll int i, x, n, c=0;
    cin>>n;
    vector<int> v;

    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(i=0;i<n-1;i++)
    {
        x = v[i] - v[i+1];

        if(x>0){
            v[i+1] += x;
            c += x;
        }
    }

    cout<<c;

    return 0;
}