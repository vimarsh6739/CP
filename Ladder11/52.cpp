#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	string s;
	cin>>s;
	int mf0=0;
	int mf1=0;
	int f0=0;
	int f1=0;
	
	if(s[0]=='0'){++f0;++mf0;}
	else {++f1;++mf1;}

	for(int i=1;i<s.size();++i){
		if(s[i]==s[i-1]){
			if(s[i]=='0'){
				++f0;
				if(f0>mf0)mf0=f0;
			}
			else{
				++f1;
				if(f1>mf1)mf1=f1;	
			}
		}
		else{
			f0=0;f1=0;
			if(s[i]=='0')++f0;
			else ++f1;
		}
	}
	if(max(mf0,mf1) >= 7)cout<<"YES"<<"\n";
	else cout<<"NO";
	return 0;
}