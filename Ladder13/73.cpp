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
    string a;
    cin>>a;
    int pos=0;
    for(int i=0;i<a.size();++i){
    	if(a[i]=='0'){pos=i;break;}
    }
    a.erase(pos,1);
    cout<<a<<"\n";
	return 0;
}
