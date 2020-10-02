#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
typedef long long ll;


#include <set>
#include <vector>


int main()
{
	ll i,n,m,h,t;

	cin>>n>>m;

	set<vector<ll>> s;

	for(i=0;i<n;i++)
	{
		cin>>h;
		s.insert({h,i}); //insert in sorted order by 'h'
	}

	for(i=0;i<m;i++)
	{
		cin>>t;

		auto lb = s.lower_bound({t+1,0});

		if(lb == s.begin()) cout<<-1<<endl;

		else{
			lb--;
			cout<<(*lb)[0]<<endl;
			s.erase(lb);
		}
	}

	return 0;
}