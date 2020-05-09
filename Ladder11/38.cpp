#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    int n;
    cin>>n;
    vector<long long>arr(n);
    long mt=0;
    int f=1;
    int pos=0;
    cin>>arr[0];
    mt = arr[0];

    for(int i=1;i<n;++i){
    	cin>>arr[i];
    	if(arr[i] == mt){
    		++f;
    	}
    	else if(arr[i] < mt){
    		pos = i;
    		mt = arr[i];
    		f = 1;
    	}
    }

    if(f==1)cout<<pos+1<<"\n";
    else cout<<"Still Rozdil\n";
    
	return 0;
}