#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n, p, max, amt; cin>>n; vector<int> a;
	    for(int j=0; j<n; j++){
	        int te; cin>>te;
	        a.push_back(te);
	    }
	    cin>>p;
	    max = *max_element(a.begin(), a.end());
	    amt = max*p;
	    cout<<amt<<endl;
	}
	return 0;
}