#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m;
int vs[10001];

void dfs(vector<string> &s, int i, int j, int ch){
	if(vs[i*m + j])return;
	vs[i*m + j] = 1;
	if(s[i][j]=='.'){s[i][j] = ch==0?'W':'B';}
	if(i < n-1)dfs(s,i+1,j,1-ch);
	if(j < m-1)dfs(s,i,j+1,1-ch);
}	

int main(){

	ios::sync_with_stdio(0);
	cin.tie(NULL);
    cin>>n>>m;
    vector<string> s(n,"");
    for(int i=0;i<n;++i)cin>>s[i];
    dfs(s,0,0,0);
	for(int i=0;i<n;++i)cout<<s[i]<<"\n";
	
	return 0;
}