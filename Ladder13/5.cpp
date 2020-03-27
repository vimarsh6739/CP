#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    
    int y,t,r;
    cin>>y;
    vector<bool> f(10,false);
	bool b = true;

	do{
		y++;
		t=y;
		b=false;

		while(t>0){
			
			r=t%10;
			if(f[r]){b=true;break;}
			f[r] = true;
			t/=10;
		
		}
		fill(f.begin(), f.end(),false);
	}while(b)  ;

	cout<<y<<"\n";
	return 0;
}	