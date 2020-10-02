#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;


int main()
{
    ll t,x,y;
    cin>>t;
    
    while(t--)
    {
        cin>>y>>x;

        if(y>x)
        {
            if(y%2==0)
                cout<< y*y - x + 1;
            else
                cout<< (y-1)*(y-1) + x;
        }
        else
        {
            if(x%2==1)
                cout<< x*x - y + 1;
            else
                cout<< (x-1)*(x-1) + y;
        }
        cout<<endl;
    }
    return 0;
}