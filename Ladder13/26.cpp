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
    bool b = false;
    for(int i=0;i<s.size();++i){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){b = true;break;}
    }
    if(b)cout<<"YES";
    else cout<<"NO";
    return 0;
}	
