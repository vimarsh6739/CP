#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,k;
	cin>>n>>k;
	vector<ll> h(n);
	for(unsigned i = 0; i < n; ++i) {
		cin>>h[i];
	}

	int j=0;
	int smin=0;
	int s=0;
	for(unsigned i = 0; i < k; ++i) {
		s+=h[i];
		smin+=h[i];
	}

	for(unsigned i = k; i < n; ++i) {
		s+=h[i]-h[i-k];
		if(smin>s){
			smin=s;
			j=i-k+1;
		}
	}
	cout<<j+1<<"\n";
}
