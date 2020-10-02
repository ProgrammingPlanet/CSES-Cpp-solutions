#include <iostream>
#include <vector>
using namespace std;
#define ll long long


int main()
{
    ll int i, x, n;
    cin>>n;
    vector<int> v(n+1,0);
    for(i=0;i<v.size()-2;i++)
    {
    	cin>>x;
    	v[x] = 1;
    }

    for(i=1;i<v.size();i++)
    {
    	if(v[i] != 1)
    	{
    		cout<<i;
    		break;
    	}
    }
    return 0;
}