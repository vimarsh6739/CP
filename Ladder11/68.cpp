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
    string s1;
    string s2;
   	getline(cin,s1);
   	getline(cin,s2);
    map<char,int> f;
    bool b = true;
    for(int i=0;i<s1.size();++i){
    	if(s1[i]!=' '){
    		f[s1[i]] = f[s1[i]]+1;
    	}
    }
    //debug
    // for(auto it=f.begin();it!=f.end();++it){
    // 	cout<<it->first<<"->"<<it->second<<"\n"; 
    // }

    for(int i=0;i<s2.size();++i){
    	if(s2[i]!=32){
    		if(f[s2[i]]==0){b=false;break;}
    		else {f[s2[i]]--;}
    	}
    }
    if(b)cout<<"YES";
    else cout<<"NO";
	return 0;
}
