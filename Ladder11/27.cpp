#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s1,s2;
	cin>>s1>>s2;
	int n = s1.size();
	int ans = 0;

	for(int i=0;i<n;++i){
		if(s1[i] < 97)s1[i]+=32;
		if(s2[i] < 97)s2[i]+=32;

		if(s1[i]!=s2[i]){
			ans = s1[i] > s2[i] ?1:-1;
			break;
		}
	}
	cout<<ans<<"\n";
	return 0;
}