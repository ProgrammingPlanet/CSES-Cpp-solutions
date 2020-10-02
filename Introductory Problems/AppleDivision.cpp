#include <iostream>
#include <vector>
#include <climits>	//for INT_MAX and INT_MIN 
using namespace std;

#define pb push_back


typedef vector<int> vi;
typedef long long LL;




int main()
{
/*
	LL n, i, j, s, curr, total=0, ans=INT_MAX;
	cin >> n;
	LL arr[n];

	for(i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}

	for(i = 0; i < (1<<n); i++) {	// 1<<x means pow(2,x)
		s = 0;
		for(j = 0; j < n; j++) {
			if(i & 1<<j) s += arr[j];
		}
		curr = abs((total-s)-s);
		ans = min(ans, curr);
	}
*/
	// cout << ans;

	cout<< (1<<5 & 4);

	return 0;
}