#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    string n;
    cin>>n;
    long long i=0;
    long long c = 0;
    
    for(i=0;i<n.size();++i){
        if(n[i]=='4' || n[i] == '7')c++;
    }
    
    bool b=false;
    while(c!=0){
        if(c%10 == 4 || c%10 == 7){b=true;}
        else{
            b=false;
            break;
        }
        c/=10;
    }
    if(b)cout<<"YES";
    else cout<<"NO";
	return 0;
}	
