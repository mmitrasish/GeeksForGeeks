#include<bits/stdc++.h>
using namespace std;
string createPalindrome(int n, int k){
    string s(n,'0');
    s[0] = '1'; s[n-1] = '1';
    for(int i=0; i+k<n; i+=k){
        s[i+k] = '1';
    }
    for(int i=n-1; i-k>=0; i-=k){
        s[i-k] = '1';
    }
    return s;
}
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n, k; cin>>n>>k;
	    string bitPali = createPalindrome(n,k);
	    cout<<bitPali<<endl;
	}
	return 0;
}