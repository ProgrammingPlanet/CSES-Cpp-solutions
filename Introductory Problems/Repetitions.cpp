#include <iostream>
#include <string>
using namespace std;
#define ll long long


int main()
{
    ll int i,n,max=0,cur=1;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
    	if(s[i]==s[i+1])
    		cur++;
    	else{
    		max = max<cur ? cur : max;
    		cur = 1;
    	}
    }

    cout<<max;

    return 0;
}