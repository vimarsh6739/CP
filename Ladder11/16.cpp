#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    int div[4];
    cin>>div[0]>>div[1]>>div[2]>>div[3];
    int d;
    cin>>d;
    vector<bool> f(d+1,false);
    int cnt = 0;

    for(int i=0;i<=3;++i){
        for(int j=1;j<=d;++j){
            if(!f[j] && (j%div[i]==0)){
                // cout<<j<<"\n";
                f[j] = true;
                cnt++;
            }
        }
        if(cnt == d)break;
    }
    cout<<cnt<<"\n";
	return 0;
}	
