#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n;
	    string s; cin>>s;
	    int noOne = 0;
	    for(int j=0; j<s.length(); j++){
	        if(s[j] == '1') noOne++;
	    }
	    int res = noOne*(noOne-1)/2;
	    cout<<res<<endl;
	}
	return 0;
}