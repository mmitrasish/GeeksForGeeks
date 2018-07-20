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
	        a.push_back(temp);
	    }
	    sort(a.begin(), a.end());
	    if(n%2 == 0){
	        for(int j=0; j<n-1; j+=2){
	            swap(a[j], a[j+1]);
	        }
	    }else{
	        for(int j=0; j<n-2; j+=2){
	            swap(a[j], a[j+1]);
	        }
	    }
	    for(auto it=a.begin(); it!=a.end(); it++){
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}