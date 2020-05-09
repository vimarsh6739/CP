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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n,0);
    for(int i=0;i<n;++i)cin>>arr[i];

    bool b = true;
	int lst = 0;
	for(int i=k-2;i>=0;--i){
		if(arr[i]!=arr[n-1]){
			lst = i+1;
			break;
		}
	}
	int chk = arr[k-1];
	for(int i=k-1;i<n;++i){
		if(arr[i]!=chk){
			b=false;
			break;
		}
	}

	if(b){
		cout<<lst;
	}
	else cout<<-1<<"\n";

	return 0;
}