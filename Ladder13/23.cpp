#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    string s;
    cin>>s;
    vector<int> f(26,0);
    for(int i=0;i<s.size();++i)
        f[s[i]-97]++;

    if((26-count(f.begin(), f.end(),0))%2==0)cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

	return 0;
}