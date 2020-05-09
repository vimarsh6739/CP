#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n,m;
	cin>>n>>m;
	vector<int> arr(n);
	vector<int> brr(m);
	for(int i=0;i<n;++i)cin>>arr[i];
	for(int i=0;i<m;++i)cin>>brr[i];

	int tmax=brr[0];
	for(int i=0;i<m;++i){
		if(brr[i]<tmax){
			tmax=brr[i];
		}
	}
	int tmin=arr[0];
	int amin=arr[0];
	for(int i=0;i<n;++i){
		if(arr[i]>tmin){
			tmin=arr[i];
		}
		if(arr[i]<amin){
			amin=arr[i];
		}
	}
	if(tmin>=tmax)cout<<-1<<"\n";
	else{

		int v=tmin;
		bool b=false;
		for(;v<tmax;++v){
			if(2*amin<=v){
				b=true;
				break;
			}
		}
		if(b)cout<<v<<"\n";
		else cout<<-1<<"\n";
	}
}