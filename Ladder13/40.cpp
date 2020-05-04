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

	int f0 = 0;
	int f5 = 0;
	for(int i=0;i<n;++i){
		if(arr[i]==0)f0++;
		else f5++;
	}

	if(f0 <= 0)	cout<<-1<<"\n";
	else {
		f5 = f5 - f5%9;
		string num = "";
		for(int i=0;i<f5;++i)num+="5";
		if(num=="")cout<<0<<"\n";
		else{
			for(int i=0;i<f0;++i)num+="0";
			cout<<num<<"\n";
		}
	}
	return 0;
}