#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n,m;
    cin>>n>>m;
    int f = 0;
    for(int a=0;a<=1000;++a){
    	for(int b=0;b<=1000;++b){
    		if(((a*a+b)==n) && ((b*b+a)==m)){
    			// cout<<a<<" "<<b<<"\n";
    			++f;
    		}
    	}
    }

    cout<<f<<"\n";
    return 0;
}