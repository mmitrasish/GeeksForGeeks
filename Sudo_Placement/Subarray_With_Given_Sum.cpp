#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i = 0; i < t; i++){
	    int n, m; cin>>n>>m;
	    int arr[n];
	    for(int j=0; j<n; j++){
	        cin>>arr[j];
	    }
	    int st=0, sum=0, k, flag =0;
	    for(k=0; k<n; k++){
	        if(sum < m) sum += arr[k];
	        
	        while(sum>m && st < k-1){
	            sum -= arr[st];
	            st++;
	        }
	        if(sum == m){
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 1){
	        cout<<st+1<<" "<<k+1<<endl;
	    }else{
	        cout<<-1<<endl;   
	    }
	    
	    
	}
	return 0;
}