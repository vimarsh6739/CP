#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[26];
int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
    	f[s[i]-97]++;
    }
    int odd=0;
	for(int i=0;i<26;++i){
		if(f[i]>0)
			if(f[i]%2)
				odd++;
	}
	
	int ans = 0;
	if(odd==1 || odd==0)ans = 1;
	else ans = odd%2; 
	
    if(ans==1)cout<<"First\n";
    else cout<<"Second\n";
	return 0;
}