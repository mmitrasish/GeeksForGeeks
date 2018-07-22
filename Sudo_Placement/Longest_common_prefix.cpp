#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    string s1, s2;
	    cin>>s1; cin>>s2;
	    int pos = -1;
	    while(!s1.empty()){
	        if(s2.find(s1) == string::npos){
	            s1.pop_back();
	        }else{
	            pos = s2.find(s1);
	            break;
	        }
	    }
	    if(pos == -1) cout<<pos<<endl;
	    else{
	        cout<<pos<<" "<<s1<<endl;
	    }
	    
	}
	return 0;
}