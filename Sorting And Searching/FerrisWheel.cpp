#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
typedef long long ll;


#include <vector>


int main()
{
	ll i,j,n,x,ans=0;

	cin>>n>>x;

	vector<ll> a(n);

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	sort(a.begin(),a.end());

	i = 0;
	j = n-1;

	while(i < j and i<n and j<n)
	{
		if(a[i]+a[j] <= x)
		{
			i++;
			j--;
		}
		else
		{
			j--;
		}
		ans++;
	}

	if(i==j) ans++;

	cout<<ans;

	return 0;
}