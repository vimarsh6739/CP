#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	int a,b,c;
	int f=0;
	while(t--) {
		cin>>a>>b>>c;
		if(a&b || b&c || a&c)++f;
	}
	cout<<f<<"\n";
	return 0;
}