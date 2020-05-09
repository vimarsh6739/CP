#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cc=0;
    for(int i=1;i<n;++i){
        if(s[i] == s[i-1])++cc;
    }
    cout<<cc<<"\n";
	return 0;
}	
