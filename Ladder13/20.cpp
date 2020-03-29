#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    string s;
    cin>>s;
    vector<int> num;
    for(int i=0;i<s.size();++i){
    	if(s[i]!='+')num.push_back(s[i]-48);
    }

   	sort(num.begin(), num.end());
   		
   	for(int i=0;i<num.size();++i){
   		cout<<num[i];
   		if(i == num.size()-1){
   			cout<<"\n";
   		}
   		else cout<<"+";
   	}

	return 0;
}