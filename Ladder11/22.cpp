#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    int n;cin>>n;
    string s;
    while(n--){
        cin>>s;
        s.size() <= 10 ? cout<<s<<"\n" : cout<<s[0]<<(s.size()-2)<<s[s.size()-1]<<"\n"; 
    }
	return 0;
}