#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int k;
    cin>>k;
    vector<int> arr(12);
    for(int i=0;i<12;++i)cin>>arr[i];

    sort(arr.begin(), arr.end());
    int s=0;
    int f=0;
    for(int i=11;i>=0;--i){
        if(s >= k)break;
        s+=arr[i];
        ++f;
    }
    if(s>=k)
    cout<<f<<"\n";
    else cout<<-1<<"\n";
    return 0;
}