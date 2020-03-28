#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    int n;
    cin>>n;
    int clo,clc,cro,crc;
    clo = clc = cro = crc = 0;  
    int l,r;

    for(int i=0;i<n;++i){
        cin>>l>>r;
        if(l)clo++;
        else clc++;

        if(r)cro++;
        else crc++;
    }

    cout<<min(clo,clc) + min(cro,crc)<<"\n";

	return 0;
}	
