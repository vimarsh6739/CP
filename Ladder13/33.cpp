#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    
    for(int i=0;i<n;++i){
    	cin>>x[i]>>y[i];
   	}

   	bool u,d,l,r;
   	int c=0;
   	for(int i=0;i<n;++i){
   		u=d=l=r=false;
   		for(int j=0;j<n;++j){
   			if(x[j]==x[i] && y[j]>y[i])u = true;
   			if(x[j]==x[i] && y[j]<y[i])d = true;
   			if(x[j]<x[i] && y[j]==y[i])l = true;
   			if(x[j]>x[i] && y[j]==y[i])r = true;
   		}
   		if(u&&d&&l&&r)++c;
   	}

   	cout<<c<<"\n";
	return 0;
}
