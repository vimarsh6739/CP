#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int n,m;cin>>n>>m;
	vector<int> arr(n);

	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}

	int p = ceil(1.0*arr[n-1]/m);
	int pos = n-1;

	for(int i = n-1;i>=0;--i)
	{
		if(p < ceil(1.0*arr[i]/m))
		{
			p = ceil(1.0*arr[i]/m);
			pos = i;
		}
	}
	cout<<1+pos<<"\n";;
	return 0;
}
