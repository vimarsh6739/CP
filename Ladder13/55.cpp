#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int sp = n;
	int inc = -1;
	int mr = 0;
	int j;
	for(int i = 0; i<2*n+1;++i){
		for(j=0;j<sp;++j)cout<<" "<<" ";
		for(j=0;j<mr;++j)cout<<j<<" ";
		for(j=mr;j>0;--j)cout<<j<<" ";
		cout<<j<<"\n";

		i<n?++mr:--mr;
		if(sp==0)inc = -inc;
		sp+=inc;
	}
	return 0;
}