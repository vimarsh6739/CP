#include <bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	// #endif
	int n,m;
	cin>>n>>m;
	int i=0;int j=0;
	string s="";
	for(;i<n && j<m;++i,++j){
		if(n<m)s+="GB";
		else s+="BG";
	}
	for(;i<n;++i){
		s+="B";
	}
	for(;j<m;++j){
		s+="G";
	}
	cout<<s<<"\n";
	return 0;
}