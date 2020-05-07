#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int dx = ex-sx;
    int dy = ey-sy;
    int cnt = 0;
    for(int i=0;i<t;++i){
    	cnt++;
    	if(dy>0 && s[i]=='N')dy--;
    	else if(dy<0 && s[i]=='S')dy++;

    	if(dx>0 && s[i]=='E')dx--;
    	else if(dx<0 && s[i]=='W')dx++;

    	if(dx==0&&dy==0)break;
    }

    if(dx==0 && dy==0)cout<<cnt<<"\n";
    else cout<<-1<<"\n";
	return 0;
}