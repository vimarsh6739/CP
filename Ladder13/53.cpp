#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
	string str,op;
	getline(cin,str);
 
	string::iterator it;
	for(it = str.begin();it!=str.end();++it)
	{
		if(*it>=65 && *it<=90)*it+=32;
 
		if(*it=='a'||*it=='o'||*it=='y'||*it=='e'||*it=='u'||*it=='i')
        {
            continue;
        }
        op.push_back('.');
        op.push_back(*it);
	}
 
	cout<<op;
    return 0;
}