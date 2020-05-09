#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int g[5][5];
int vs[5];

ll perm(int s,int l){
	ll amax = 0;
	for(int i=0;i<5;++i){
		if(vs[i])continue;
		vs[i]=1;
		if(l<=2)
			amax = max(amax, g[s][i] + g[i][s] + perm(i,l+1));
		else
			amax= max(amax, 2*g[s][i] + 2*g[i][s] + perm(i,l+1));
		vs[i]=0;
	}
	return amax;
}

int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
    for(int i=0;i<5;++i)
    	for(int j=0;j<5;++j)
    		cin>>g[i][j];
    	
   	ll amax=0;
   	for(int i=0;i<5;++i){
   		vs[i] = 1;
   		amax = max(amax,perm(i,1));
   		vs[i]=0;
   	}
    cout<<amax<<"\n";
	return 0;
}