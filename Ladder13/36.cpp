
#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;++i)cin>>arr[i];	

	int p = 0; 
	int pn=1;
	int mp = abs(arr[1] - arr[0]);
	int tm;
	int j;
	for(int i = 0;i<n;++i){
		j= (i+1)%n;
		tm = abs(arr[j] - arr[i]);

		if(mp > tm){
			mp  = tm;
			p = i;
			pn = j;
		}
	}
	cout<<(p+1)<<" "<<(pn+1)<<"\n";
}