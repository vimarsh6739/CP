#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	ll n,m;
	cin>>n>>m;
	vector<ll> arr(m+1,0);
	ll t=0;
	arr[0] = 1;
	for(ll i=1;i<=m;++i){
		cin>>arr[i];
		t += (arr[i] - arr[i-1] + n)%n;
	}
	cout<<t<<"\n";
	return 0;
}