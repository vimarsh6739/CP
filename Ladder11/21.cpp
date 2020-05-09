#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    long long a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    map<long long , int> f;
    int cnt = 0;
    for(int i=0;i<4;++i){
    	if(f.find(a[i]) == f.end()){
    		f.insert(make_pair(a[i],1));
    	}
    	else{
    		f[a[i]]++;
    		cnt++;
    	}
    }
    cout<<cnt<<"\n";
	return 0;
}