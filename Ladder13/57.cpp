#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	int n,m;
	cin>>n>>m;
	vector<int> f(m,0);
	for(int i=0;i<m;++i)cin>>f[i];
	sort(f.begin(), f.end());
	
	// for (int i = 0; i < m; ++i){cout<<f[i]<<" ";}
	// cout<<"\n";

	int ml=0;
	int mh = n-1;

	for(int i=n;i<m;++i){
		if((f[mh]-f[ml]) > (f[i]-f[i-n+1])){
			mh = i;
			ml = i-n+1;
		}
	}
	// cout<<ml<<" "<<mh<<"\n";
	cout<<f[mh]-f[ml]<<"\n";
	return 0;
}