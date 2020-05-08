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

    int n;
    cin>>n;
    vector<ll> left(n);
    vector<ll> right(n);
    ll ml = 1000000000;
    ll mr = 0;
    for(int i=0;i<n;++i){
    	cin>>left[i]>>right[i];
    	if(ml > left[i])ml=left[i];
    	if(mr < right[i])mr=right[i];
    }
    int ans=-1;
    for(int i=0;i<n;++i){
    	if(ml>=left[i] && mr<=right[i] && ml<=mr){
    		ans=i+1;break;
    	}
    }
    cout<<ans<<"\n";
	return 0;
}
