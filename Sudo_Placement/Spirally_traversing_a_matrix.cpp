#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int a[4][4];
	    for(int j=0; j<4; j++){
	        for(int k=0; k<4; k++){
	            cin>>a[j][k];
	        }
	    }
	    
	    for(int j=0; j<4; j++){
	        cout<<a[0][j]<<" ";
	    }
	    for(int j=1; j<3; j++){
	        cout<<a[j][3]<<" ";
	    }
	    for(int j=3; j>=0; j--){
	        cout<<a[3][j]<<" ";
	    }
	    for(int j=2; j>=1; j--){
	        cout<<a[j][0]<<" ";
	    }
	    cout<<a[1][1]<<" "<<a[1][2]<<" "<<a[2][2]<<" "<<a[2][1]<<endl;
	}
	return 0;
}