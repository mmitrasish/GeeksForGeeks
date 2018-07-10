#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n;
	    int arr[n];
	    for(int j=0; j<n-1; j++){
	        cin>>arr[j];
	    }
	    sort(arr, arr+n-1);
	    for(int k=1; k<=n; ++k){
	        //cout<<k<<" "<<arr[k]<<endl;
	        if(arr[k-1] != k){
	            cout<<k<<endl;
	            break;
	        }
	    }
	}
	return 0;
}