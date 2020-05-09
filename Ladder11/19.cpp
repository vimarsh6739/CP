#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    int a,b;
    int t=0;
    int m=0;

    for(int i=0;i<n;++i)
	{
		cin>>a>>b;
		t+=b-a;
		m = max(t,m);
	}
	cout<<m<<"\n";
	return 0;
}