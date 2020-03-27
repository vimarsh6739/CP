#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    string a;
    string b;
    cin>>a>>b;
    string c = a;
    for(int i=0;i<a.size();++i){
        if(a[i] == b[i])c[i] = '0';
        else c[i] = '1';
    }
    cout<<c<<"\n";
	return 0;
}	
