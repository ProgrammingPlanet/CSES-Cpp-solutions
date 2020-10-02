#include <iostream>
#include <map>
using namespace std;

typedef long long ll;



int main()
{
    int oddCount=0;
    char oddchar;

    map<char,int> m;	//map is like "array of pairs"

    string s;

    cin>>s;

    for(char c : s)
    {
    	m[c] = (m.count(c)==0) ? 1 : (m[c]+1);
    }

    for(auto p : m)
    {
    	if(p.second%2 == 1)
    	{
    		oddCount++;
    		oddchar = p.first;
    	}
    }

    if(oddCount > 1 || (oddCount==1 && s.size()%2==0)) 
    {
    	cout<<"NO SOLUTION";
    	return 0;
    }

    string firstHalf = "", secondHalf = ""; 

    for (auto p : m)
    {
	    string s(p.second / 2, p.first); 
	    firstHalf = firstHalf + s; 
	    secondHalf = s + secondHalf; 
	} 

	if(oddCount == 1)
		cout<<firstHalf + oddchar + secondHalf;
	else
		cout<<firstHalf + secondHalf;
    
    return 0;
}