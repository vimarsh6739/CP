#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[1001];
int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;++i){
		cin>>x;
		f[x]++;
	}

	sort(f,f+1001,greater<int>());
	bool b=true;
	if(f[0] > ceil(n*1.0/2))b=false;

	if(b)cout<<"YES";
	else cout<<"NO";

	return 0;
}
