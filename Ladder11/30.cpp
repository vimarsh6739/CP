#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll n;
	cin>>n;
	vector<ll> arr(n,0);
	map<ll,ll> indexmap;
	for (ll i = 0; i < n; ++i){
		cin>>arr[i];
		indexmap.insert(make_pair(arr[i],i+1));
	}

	ll m;cin>>m;
	ll b;
	ll a1 = 0, a2=0;
	while(m--) {
		cin>>b;
		a1+=indexmap[b];
		a2+=n + 1 - indexmap[b];
	}
	cout<<a1<<" "<<a2<<"\n";
	return 0;
}