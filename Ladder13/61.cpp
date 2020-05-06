#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

    ll n;
    cin>>n;
    vector<ll> b(n);
    for(ll i=0;i<n;++i){
    	cin>>b[i];
    }
   	 
   	ll 	fmax=0,
   		fmin=0,
   		amax=*max_element(b.begin(),b.end()),
   		amin=*min_element(b.begin(), b.end());

   	for(ll i=0;i<n;++i){
   		if(b[i]==amax)fmax++;
   		if(b[i]==amin)fmin++;
   	}
   	if(amax==amin)cout<<0<<" "<<n*(n-1)/2<<"\n";
   	else cout<<amax-amin<< " "<<fmax*fmin<<"\n"; 
	return 0;
}