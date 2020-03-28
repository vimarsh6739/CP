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
    vector<int>p(n+1,0);
    
    if(n%2){cout<<-1<<"\n";return 0;}\

    for(int i=1;i<=n;i+=2){
        p[i+1] = i;
        p[i] = i+1;
        //p[p[i+1]] = i+1;
        //p[p[i]] = i
    }
    
    for(int i=1;i<=n;++i)cout<<p[i]<<" ";
    cout<<"\n";

	return 0;
}	
