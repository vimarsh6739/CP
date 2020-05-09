#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int> lf;
	vector<int> rt;
	string s;
	cin>>s;
	for(int i=0;i<n;++i){
		lf.push_back(s[i]-48);
	}
	for(int i=n;i<2*n;++i){
		rt.push_back(s[i]-48);
	}

	sort(lf.begin(), lf.end());
	sort(rt.begin(), rt.end());
	int chk=0;
	for(int i=0;i<n;++i){
		if(lf[i]>rt[i])
			chk |= 1;
		else if(lf[i]<rt[i])
			chk |= 2;
		else 
			chk |= 3;
	}

	if(chk==1 || chk==2)cout<<"YES\n";
	else if(chk==3)cout<<"NO\n";

	return 0;

}