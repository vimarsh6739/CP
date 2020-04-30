#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int ab,bc,ac;
	cin>>ab>>bc>>ac;

	int a,b,c;
	for(a = 1; a <= ab; ++a)
	{
		if(ab%a == 0 && ac%a==0)
		{
			b = ab/a;
			c = ac/a;
			if(b*c == bc){
				// cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
				cout<<4*(a+b+c)<<"\n";
				break;
			}
		}
		
	}

	return 0;
}