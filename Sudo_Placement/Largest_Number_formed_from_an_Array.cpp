#include<bits/stdc++.h>
using namespace std;
int myCompare(string X, string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);
    
    return XY.compare(YX) > 0 ? 1:0;
}
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; vector<string> a;
	    for(int j=0; j<n; j++){
	        string st; cin>>st;
	        a.push_back(st);
	    }
	    sort(a.begin(), a.end(), myCompare);
	    for(auto it=a.begin(); it!=a.end(); it++){
	        cout<<*it;
	    }
	    cout<<endl;
	}
	return 0;
}