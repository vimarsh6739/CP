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

    string s;
    cin>>s;

   	string t = "hello";
   	int j=0;
   	for(int i=0;i<s.size();++i){
   		if(s[i]==t[j])++j;
   	}
   	if(j==5)cout<<"YES";
   	else cout<<"NO";
	return 0;
}