#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif	
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i)cin>>a[i];
	int m;cin>>m;
	vector<int> b(m);
	for(int i=0;i<m;++i)cin>>b[i];

	int mr = 0;
	int f = 0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(b[j]%a[i]==0){
				if(mr < b[j]/a[i]){
					mr = b[j]/a[i];
					f = 1;
				}
				else if(mr == b[j]/a[i]){
					++f;
				}
			}
		}
	}
	// cout<<mr<<"\n";
	cout<<f<<"\n";
	return 0;
}