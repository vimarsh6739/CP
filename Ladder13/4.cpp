#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	string code;
	cin>>code;
	string str  = "";
	string ans = "";
	for(int i=0;i<code.size();++i){
		str += code[i];
		if(str == "."){ans += '0';str="";}
		if(str == "-."){ans += '1';str="";}
		if(str == "--"){ans += '2';str="";}
	}	
	cout<<ans<<"\n";
	return 0;
}	