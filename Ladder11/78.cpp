#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll y,k,n;
	cin>>y>>k>>n;

	ll x=1;
	ll p = ceil(1.0*(y+1)/k);
	x = p*k-y;
	if(x>n-y){cout<<-1;}
	else {
		for(;x<=n-y;x+=k){
			cout<<x<<" ";
		}
	}

	return 0;
}