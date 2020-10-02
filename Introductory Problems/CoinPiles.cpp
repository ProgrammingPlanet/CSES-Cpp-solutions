#include<iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll t,a,b;
    cin>>t;
    while(t--)
    {
      cin>>a>>b;
      if( !((a+b)%3) && ( max(a,b)<=min(a,b)*2 ))
      {
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
}