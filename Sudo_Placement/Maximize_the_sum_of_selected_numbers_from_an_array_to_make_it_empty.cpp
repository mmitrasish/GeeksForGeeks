#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; int a[21];
	    for(int j=0; j<21; j++) a[j] = 0;
	    for(int j=0; j<n; j++){
	        int temp; cin>>temp;
	        a[temp]++;
	    }
	    for(int j=20; j>0; j--){
	        if(a[j]>=a[j-1]) a[j-1] = 0;
	        else {
	            a[j-1] = a[j-1] - a[j];
	        }
	    }
	    int sum = 0;
	    for(int j=1; j<21; j++){
	        sum += j*a[j];
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}