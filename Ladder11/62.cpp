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

    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,vector<int> > pos;
    for(int i=0;i<n;++i){
		cin>>arr[i];
		if(pos.find(arr[i])==pos.end()){
			pos.insert(make_pair(arr[i],vector<int>(0)));
		}
		pos[arr[i]].push_back(i);
    }
    
    vector<pair<int,int> > ans;
    bool b = false;int d=0;
    for(auto it = pos.begin();it!=pos.end();++it){

    	// cout<<it->first<<"->";
    	// for(int i=0;i<it->second.size();++i){
    	// 	cout<<it->second[i]<<" ";
    	// }
    	// cout<<"\n";

    	pair<int,int> p = {0,0};
    	p.first = it->first;
    	b = true;
    	d=0;
    	if(it->second.size()>1){
    		d = it->second[1] - it->second[0];
	    	for(int i=1;i<it->second.size();++i){
	    		if(d!=(it->second[i] - it->second[i-1])){
	    			b=false;
	    			break;
	    		}
	    	}
    	}

    	if(b){
    		p.second = d;
    		ans.push_back(p);
    	}
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();++i){
    	cout<<ans[i].first<<" "<<ans[i].second<<"\n"; 
    }

	return 0;
}