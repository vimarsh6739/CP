#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    string a,b,ab;
    cin>>a>>b>>ab;
    
    if(ab.size() != a.size() + b.size())
    {
         cout<<"NO";return 0;
    }   
    
    vector<int> f(26,0);
    for(int i=0;i<a.size();++i){
        f[a[i]-65] ++ ;
    }
 
    for(int i=0;i<b.size();++i){
        f[b[i]-65] ++ ;
    }
    
    for(int i=0;i<ab.size();++i){
        f[ab[i]-65] -- ;
    }

    if(count(f.begin(), f.end(),0) == 26)cout<<"YES\n";
    else cout<<"NO\n";
	return 0;
}