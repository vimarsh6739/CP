#include <bits/stdc++.h>
using namespace std;

#define FOR0(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<=n;++i)

typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
    ll n;
    vector<ll> f(8);
    cin>>n;
    int a;
    for(ll i=0;i<n;++i){
    	cin>>a;
    	f[a]++;
    }
    vector<int> t(3);
    if(f[7]>0|| f[5]>0 || f[3]>f[1] || f[3]>f[6] || f[4]>f[1]){
    	cout<<-1;
    }
    else{
    	t[2]=f[3];
    	f[1]-=f[3];
    	f[6]-=f[3];
    	if(f[6]>f[1])cout<<-1;
    	else{
    		t[1]=f[6];
    		f[1]-=f[6];
    		f[2]-=f[6];
    		if(f[1]==f[2] && f[2]==f[4]){
    			t[0] = f[4];
    			for(ll i=0;i<t[0];++i){
    				cout<<"1 2 4\n";
    			}

    			for(ll i=0;i<t[1];++i){
    				cout<<"1 2 6\n";
    			}

    			for(ll i=0;i<t[2];++i){
    				cout<<"1 3 6\n";
    			}
    		}
    		else cout<<-1;
    	}
    }
	return 0;
}