#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    ll v;
    cin>>v;
    if(v==0){cout<<"0 0 0"<<"\n";}
    else if (v==1){cout<<"0 0 1"<<"\n";}
    else{
    	ll a = 0;
    	ll b = 1;
    	ll c = 1;
    	while(c+b!=v){
    		a = b;
    		b = c;
    		c = a+b;
    	}
    	cout<<a<<" "<<b<<" "<<b<<" "<<"\n";
    }
	return 0;
}