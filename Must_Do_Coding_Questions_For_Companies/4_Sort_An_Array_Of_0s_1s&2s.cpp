#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i = 0; i < t; i++){
	    int n; cin>>n; int arr[n];
	    for(int j=0; j<n; j++){
	        cin>>arr[j];
	    }
	    sort(arr, arr+n);
	    for(int k=0; k<n; k++){
	        cout<<arr[k]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}