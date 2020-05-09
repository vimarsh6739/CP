#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	long long n,k;
	cin>>n>>k;
	
	long long e = n/2;
	long long o = n - e;

	if(k <= o){
		cout<<(2*k - 1)<<"\n";;
	}
	else{
		cout<<2*(k-o)<<"\n";
	}
	return 0;
}