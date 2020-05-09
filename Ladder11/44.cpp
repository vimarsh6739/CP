#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int f0,f1;f0=f1=0;
	string s0,s1;s0 = "";s1 = "";
	cin>>s0;
	++f0;
	string t;

	for(int i=1;i<n;++i){
		cin>>t;
		if(t==s0)f0++;
		else{
			if(s1=="")s1 = t;
			f1++;
		}
	}

	if(f0 > f1)cout<<s0;
	else cout<<s1;
	return 0;
}