#include<bits/stdc++.h>
using namespace std;
bool checkRotation(string s1, string s2){
    string s_rot_anti = s1;
    s_rot_anti += s1[0]; s_rot_anti += s1[1];
    s_rot_anti.erase(s_rot_anti.begin());
    s_rot_anti.erase(s_rot_anti.begin());
    
    if(s_rot_anti == s2) return true;
    
    string s_rot = s1;
    int s_len = s1.length();
    s_rot.insert(s_rot.begin(), s1[s_len-1]);
    s_rot.insert(s_rot.begin(), s1[s_len-2]);
    s_rot.pop_back();
    s_rot.pop_back();
    
    if(s_rot == s2) return true;
    
    return false;
}
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    string str1, str2;
	    cin>>str1;
	    cin>>str2;
	    
	    if(checkRotation(str1, str2)) cout<<1<<endl;
	    else cout<<0<<endl;
	    
	}
	return 0;
}