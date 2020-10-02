#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
typedef long long ll;


#include <vector>


int main()
{
	ll i,j,n,m,k,ans=0;

	cin>>n>>m>>k;

	vector<ll> a(n), b(m);

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	i = j = 0;

	while(i<n and j<m)
	{
		if(abs(a[i]-b[j]) <= k)
		{
			i++;
			j++;
			ans++;
		}
		else if(a[i] < b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}

	cout<<ans;

	return 0;
}