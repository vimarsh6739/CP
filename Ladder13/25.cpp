#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans = min(k*l/nl, min(c*d, p/np))/n;
    cout<<ans<<"\n";
	return 0;
}	
