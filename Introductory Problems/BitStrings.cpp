#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,r=1;

    cin>>n;

    while(n--)
    {
        r = (r*2) % (int)(1e9+7);   /* 1e9 short for 10^9*/
    }

    cout<<r;
    
    return 0;
}