#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    string s; cin>>s; int max = INT_MIN;
	    for(int j=0; j<s.length(); j++){
	        string te = "";
	        te.push_back(s[j]);
	        int len = 1;
	        for(int k=j+1; k<s.length(); k++){
	            if(te.find(s[k]) == string::npos){
	                te.push_back(s[k]);
	                len++;
	            }else{
	                break;
	            }if(max<len) max = len;
	        }
	        if(max < len) max = len;
	    }
	    cout<<max<<endl;
	}
	return 0;
}