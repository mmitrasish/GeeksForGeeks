#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; vector<int> a;
	    for(int j=0; j<n; j++){
	        int temp; cin>>temp;
	        if(find(a.begin(), a.end(), temp) == a.end()){
	            a.push_back(temp);
	            cout<<temp<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}