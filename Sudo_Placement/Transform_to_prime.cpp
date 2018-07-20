#include<bits/stdc++.h>
bool primeChecker(int n){
    if(n==2 || n==3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    
    int i=5, w=2;
    while(i*i <= n){
        if(n%i == 0) return false;
        
        i = i + w;
        w = 6 - w;
    }
    
    return true;
}
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i = 0; i<t; i++){
	    int n, sum = 0, temp, min; cin>>n;
	    for(int j=0; j<n; j++){
	        cin>>temp;
	        sum += temp;
	    }
	    
	    for(int j=sum; j<INT_MAX; j++){
	        if(primeChecker(j)){
	            min = j - sum;
	            break;
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}