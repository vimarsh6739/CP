#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	vector<vector<int>> arr(3,vector<int>(3,0));
	vector<vector<int>> ans(3,vector<int>(3,1));	
	
	for(int i=0;i<3;++i)
		for(int j=0;j<3;++j)
			cin>>arr[i][j];
	

	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			if(arr[i][j]%2==1){
				ans[i][j]=1-ans[i][j];
				if(i<2)ans[i+1][j] = 1 - ans[i+1][j];
				if(i>0)ans[i-1][j] = 1 - ans[i-1][j];
				if(j>0)ans[i][j-1] = 1 - ans[i][j-1];	
				if(j<2)ans[i][j+1] = 1 - ans[i][j+1];
			}
		}
	}

	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			cout<<ans[i][j];
		}
		cout<<"\n";
	}
	return 0;
}	
