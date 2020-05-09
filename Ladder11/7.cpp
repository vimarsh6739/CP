#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;
	string lc = s;
	string uc = s;
	int nl=0,nu=0;
	for(int i=0;i<s.size();++i){
		if(s[i] >= 97){
			uc[i] = s[i]-32;
			nl++;
		}
		else{
			lc[i] = s[i] + 32;
			nu++;
		}
	}
	if(nl < nu)cout<<uc<<"\n";
	else cout<<lc<<"\n";
	return 0;
}	
	