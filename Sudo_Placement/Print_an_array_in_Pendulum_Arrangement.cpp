#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; vector<int> a, b;
	    for(int j=0; j<n; j++){
	        int temp; cin>>temp;
	        a.push_back(temp);
	    }
	    sort(a.begin(), a.end());
	    b.push_back(*a.begin());
	    
	    for(int j=1; j<n; j++){
	        if(j%2 != 0) b.push_back(a[j]);
	        if(j%2 == 0) b.insert(b.begin(), a[j]);
	    }
	    
	    for(auto it=b.begin(); it!=b.end(); it++){
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}