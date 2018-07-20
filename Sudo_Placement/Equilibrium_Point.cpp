#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; int arr[n];
	    for(int j=0; j<n; j++) cin>>arr[j];
	    
	    if(n==1){
	        cout<<n<<endl;
	    }else{
	        int flag=0, k=1;
	        while(k<n){
	            int sum_st=0, sum_end = 0;
	            for(int l=0; l<k; l++) sum_st += arr[l];
	            for(int l=k+1; l<n; l++) sum_end += arr[l];
	            if(sum_st == sum_end){
	                flag =1;
	                break;
	            }
	            k++;
	        }
	        if(flag == 1) cout<<k+1<<endl;
	        else cout<<-1<<endl;
	    }
	    
	}
	return 0;
}