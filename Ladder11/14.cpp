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
    
    vector<int>arr(n);
    for(int i=0;i<n;++i)cin>>arr[i];

    int pmin=0,pmax=0;
    int xmin=arr[0],xmax=arr[0];

    for(int i=0;i<n;++i){
        if(xmin >= arr[i]){
            xmin = arr[i];
            pmin = i;
        }
        if(xmax < arr[i]){
            xmax = arr[i];
            pmax = i;
        }
    }
    
    ++pmin;
    ++pmax;

    pmin > pmax ? cout<<(pmax+n-1-pmin)<<"\n" : cout<<(pmax+n-1-pmin-1)<<"\n";
	return 0;
}	
