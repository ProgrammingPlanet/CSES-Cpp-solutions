#include <iostream>
#include <set>
using namespace std;

typedef long long LL;


set<string> v;

void permute(string pre, string suf)
{
    if(suf.size() == 0)
    {
        v.insert(pre);
    }
    else{
    	for(int i=0; i<suf.size(); i++)
	    {
	        permute(pre + suf[i], suf.substr(0, i) + suf.substr(i + 1));
	    }
    }   
}

int main()
{
    string s;

    cin>>s;

    permute("",s);

    cout<<v.size()<<endl;

    for(auto i : v)
    {
    	cout<<i<<endl;
    }
    
    return 0;
}