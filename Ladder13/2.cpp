#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
/*	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);*/

	int r,c,x;
	for(int i=1;i<=5;++i){
		for(int j=1;j<=5;++j){
			cin>>x;
			if(x){r=i;c=j;}
		}
	}
	cout<<abs(r-3)+abs(c-3)<<"\n";
	return 0;
}	