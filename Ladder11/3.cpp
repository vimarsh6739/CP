#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int n,t;
	cin>>n>>t;
	string q;
	cin>>q;
	while(t--){
		for(int i=1;i<n;++i){
			if(q[i-1]=='B' && q[i] == 'G'){swap(q[i-1],q[i]);++i;}
		}
	}
	cout<<q<<"\n";
	return 0;
}	