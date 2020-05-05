#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	int n,a,b;
	cin>>n>>a>>b;

	cout<<1+n-max(a+1,n-b)<<"\n";
	return 0;
}
