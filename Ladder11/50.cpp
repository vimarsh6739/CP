#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int k;
	string s;
	cin>>k;
	cin>>s;
	
	vector<int> f(26,0);
	for(int i=0;i<s.size();++i){
		f[s[i]-97]++;
	}
	bool b = true;
	for(int i=0;i<26;++i){
		if(f[i]!=0){
			if(f[i]%k!=0)b = false;
		}
	}

	if(b){
		string base = "";
		for(int i=0;i<26;++i){
			if(f[i]!=0){
				for(int j=0;j<(f[i]/k);++j){
					base += (char)(i+97);
				}
			}
		}
		for(int i=0;i<k;++i)cout<<base;
		cout<<"\n";
	}
	else cout<<-1<<"\n";
	
	return 0;
}