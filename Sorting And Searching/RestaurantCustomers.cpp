#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
typedef long long ll;



#include <vector>


int main()
{
	ll i,n,a,b,c=0,m=INT_MIN;

	cin>>n;

	vector<vector<ll>> v;

	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		v.push_back({a,1});
		v.push_back({b,-1});
	}

	sort(v.begin(),v.end());

	for(i=0;i<v.size();i++)
	{
		c += v[i][1];
		m = max(c,m);
	}

	cout<<m;

	return 0;
}