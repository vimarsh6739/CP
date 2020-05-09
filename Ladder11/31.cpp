#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int s=0;
	vector<int> arr(n,0);
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		s+=arr[i];
	}

	int c=0;
	for(int i=1;i<=5;++i){
		if((s+i)%(n+1) != 1)++c;
	}

	cout<<c<<"\n";	
	return 0;
}
