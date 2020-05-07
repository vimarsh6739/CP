#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 10000000
bool vis[MAX];

void sieve(int n){
	ll j=2;
	while(n--){
		vis[j]=true;
		cout<<j<<" ";
		for(ll k=2*j;k<MAX;k+=j)vis[k]=true;
		while(vis[j])++j;
	}
}

int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    sieve(n);
	return 0;
}
