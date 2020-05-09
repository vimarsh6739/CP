#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    int s,n;
    cin>>s>>n;
    vector<pii> xy(n,make_pair(0,0));
    for(int i=0;i<n;++i)cin>>xy[i].first>>xy[i].second;

    sort(xy.begin(), xy.end());

    int a = s;
    bool b = true;

    for (int i = 0; i < n; ++i)
    {
    	if(a > xy[i].first){
    		a+=xy[i].second;
    	}
    	else{
    		b=false;
    		break;
    	}
    }

    if(b)cout<<"YES";
    else cout<<"NO";
	return 0;
}