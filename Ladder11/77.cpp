#include <bits/stdc++.h>
using namespace std;

int f[10001];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int> arr(n);
	int s=0;
	for(int i=0;i<n;++i){
		cin>>arr[i];
		s+=arr[i];
	}

	if(s%n==0)cout<<n<<"\n";
	else cout<<n-1<<"\n";
	

	return 0;
}