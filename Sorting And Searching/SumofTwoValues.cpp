#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
typedef long long ll;



#include <vector>


int main()
{
	ll i,n,x,t,f,l;

	cin>>n>>x;

	vector<vector<ll>> v;

	for(i=0;i<n;i++)
	{
		cin>>t;
		v.push_back({t,i});
	}

	sort(v.begin(),v.end());

	f = 0; l = n-1;

	while(f < l)
	{
		t = v[f][0] + v[l][0];

		if(t < x)
		{
			f++;
		}
		else if(t > x)
		{
			l--;
		}
		else{
			if(v[f][1] < v[l][1])
				cout<<v[f][1]+1<<" "<<v[l][1]+1;
			else
				cout<<v[l][1]+1<<" "<<v[f][1]+1;
			break;
		}
	}

	if(f >= l) cout<<"IMPOSSIBLE";

	return 0;
}