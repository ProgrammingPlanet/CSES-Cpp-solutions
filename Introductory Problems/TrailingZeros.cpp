#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,r=0;

    cin>>n;

    while(n)
    {
        r += n/5;
        n = n/5;
    }

    cout<<r;
    
    return 0;
}