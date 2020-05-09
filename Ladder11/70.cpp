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

    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(s1.size()!=s2.size()) 	cout<<"NO";
    else{
    	vector<char> p1;
    	vector<char> p2;
    	for(unsigned i = 0; i < s1.size(); ++i) {
    		if(s1[i]==s2[i])continue;
    		p1.push_back(s1[i]);
    		p2.push_back(s2[i]);
    	}
    	if(p1.size()>2)cout<<"NO";
    	else{
    		if(p1[0]==p2[1] && p2[0]==p1[1])cout<<"YES";
    		else cout<<"NO";
    	}
    }
	return 0;
}
