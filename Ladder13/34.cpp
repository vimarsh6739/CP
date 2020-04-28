#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

  int n;
  cin>>n;
  vector<int> p(7);
  int s=0;
  for(int i=0;i<7;++i){cin>>p[i];s+=p[i];}
  n = s > 1 ? n%s : 1;
  if(n==0)n+=s;
  for(int i=0;i<7;++i){
    n-=p[i];
    if(n<=0){
      cout<<i+1<<"\n";
      break;
    }
  }

	return 0;
}
