#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
typedef long long ll;



#include <vector>


bool compare(vector<ll> a, vector<ll> b)
{
	return a[1] < b[1]; //descending order
}

int main()
{
	ll i,n,a,b,ans=0,l=INT_MIN;

	cin>>n;

	vector<vector<ll>> v;

	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		v.push_back({a,b});
	}

	sort(v.begin(),v.end(),compare);

	for(i=0;i<n;i++)
	{
		if(v[i][0] >= l)
		{
			ans++;
			l = v[i][1];
		}
	}

	cout<<ans;

	return 0;
}