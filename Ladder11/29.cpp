#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	string s;
	int acc = 0;
	while(t--) {
		cin>>s;
		if(s[0] == '+' || s[1] == '+')acc++;
		else acc--;
	}
	cout<<acc<<"\n";
	return 0;
}