#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; vector<int> a, b;
	    for(int j=0; j<n; j++){
	        int te; cin>>te;
	        a.push_back(te);
	    }
	    int max = INT_MIN;
	    for(auto it=a.rbegin(); it!=a.rend(); it++){
	        if(max<*it){
	            max =*it;
	            b.push_back(*it);
	        }
	    }
	    for(auto it=b.rbegin(); it!=b.rend(); it++){
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}