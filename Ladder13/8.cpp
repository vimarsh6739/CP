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
    if(s[0] >= 97)s[0]-=32;
    cout<<s<<"\n";
	
	return 0;
}	
