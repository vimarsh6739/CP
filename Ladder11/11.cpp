#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    int arr[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m;
    cin>>n>>m;
    bool b = false;
    for(int i=0;i<14;++i)
    {
        if(n == arr[i] && m == arr[i+1])b = true;
    }
    if(b)cout<<"YES";
    else cout<<"NO";
	return 0;
}	
