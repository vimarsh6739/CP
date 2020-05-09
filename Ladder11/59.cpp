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

    int n,m;
    cin>>n>>m;
    vector<int> arr(m);
    for(int i=0;i<m;++i)cin>>arr[i];
    sort(arr.begin(), arr.end());
	
	vector<int> maxf(m,0);
	vector<int> minf(m,0);

	int amax=0;
	int amin=0;
	int e = m-1;
	int jmin = 0;

	//min
	for(int i=0;i<n;++i){

		if(minf[jmin]==arr[jmin]){jmin++;}
		amin+=arr[jmin] - minf[jmin];
		minf[jmin]++;
	}

	//max
	priority_queue<int,vector<int>, less<int> > heap(arr.begin(), arr.end());
	for(int i=0;i<n;++i){
		e = heap.top();
		amax+=e;
		heap.pop();
		heap.push(e-1);

	}

	cout<<amax<<" "<<amin<<"\n";
	return 0;
}