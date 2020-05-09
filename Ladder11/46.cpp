#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;++i)cin>>arr[i];

    sort(arr.begin(), arr.end());
	
	int s=0;
	for(int i=0;i<m;++i){
		if(arr[i]<=0)s-=arr[i];
		else break;
	}
	cout<<s<<"\n";	
	return 0;
}