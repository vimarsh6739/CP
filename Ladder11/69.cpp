#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

  	int n;
  	cin>>n;
  	std::vector<int> arr(n);
  	int c0=0,c1=0;
  	for(unsigned i = 0; i < n; ++i) {
  		cin>>arr[i];	
  		if(arr[i]==100)c0++;
  		else c1++;
  	}
  	if(c0%2)cout<<"NO";
  	else{
  		if(c1%2){
  			if(c0>=2)cout<<"YES";
  			else cout<<"NO";
  		}
  		else cout<<"YES";
  	}

	return 0;
}
