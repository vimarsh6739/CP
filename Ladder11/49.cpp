#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    string s;
    cin>>s;
    string str = "";   
    vector<int> flag(s.size(),0);

    for(int i = 0; i < ((int)s.size()-2);++i){
        str = s.substr(i,3);
        if(str=="WUB")flag[i] = 1;
    }
    string w = "";    
    for(int i = 0;i<s.size();++i){
        if(flag[i]){
            if(w!="")cout<<w<<" ";
            w = "";
            i+=2;
            continue;
        }
        else{
            w+=s[i];
        }
    }

    if(w!="")cout<<w<<" ";
    cout<<"\n";
    return 0;   
}
