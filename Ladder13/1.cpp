#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int sx=0,sy=0,sz=0;
	int x,y,z;
	while(n--){
		cin>>x>>y>>z;
		sx+=x;sy+=y;sz+=z;
	}
	if((sx | sy) | sz)cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}