#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n, flag=0; cin>>n;
	    string str; cin>>str;
	    for(int j=0; j<n; j++){
	        if(str[j] != str[n-1-j]){
	            flag=1;
	            break;
	        }
	    }
	    if(flag == 0) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}