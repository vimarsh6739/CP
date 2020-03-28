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
    vector<double> p(n,0.0);
    double s = 0.0;
    for(int i=0;i<n;++i){
        cin>>p[i];
        s+=p[i];
    }
    cout<<setprecision(7)<<(s/n)<<"\n";

	return 0;
}	
