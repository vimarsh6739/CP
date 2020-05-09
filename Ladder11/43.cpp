#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	string s,t;
	cin>>s>>t;
	bool b = true;
	int n = s.size();
	if(s.size()!=t.size())cout<<"NO";
	else{
		for(int i= 0;i<n;++i){
			if(s[i] != t[n-1-i])b = false;
		}

		if(b)cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}