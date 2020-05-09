#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	bool b = true;
	string num;
	cin>>num;
	int f4 = 3;

	for(int i=0;i<num.size() && b;++i){
		
		if(num[i]=='1')f4 = 0;
		else if(num[i]=='4')++f4;
		else b = false;

		if(f4 > 2)b = false;
	}
	
	if(b)cout<<"YES";
	else cout<<"NO";

	return 0;
}