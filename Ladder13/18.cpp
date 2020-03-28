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
    vector<int> arr(n,0);
    for(int i=0;i<n;++i)cin>>arr[i];

    int xmin=arr[0];
    int xmax = arr[0];
    int cnt = 0;
    for(int i=1;i<n;++i){
        if(xmin > arr[i])
        {
            xmin = arr[i];cnt++;
        }

        if(xmax < arr[i]){
            xmax = arr[i];cnt++;
        }
    }

    cout<<cnt<<"\n";

	return 0;
}	
