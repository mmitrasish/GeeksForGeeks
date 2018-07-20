#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> keypad = {
    {},
    {},
    {"a", "b", "c"},
    {"d", "e", "f"},
    {"g", "h", "i"},
    {"j", "k", "l"},
    {"m", "n", "o"},
    {"p", "q", "r", "s"},
    {"t", "u", "v"},
    {"w", "x", "y", "z"}
};
void generator(vector<int> a, string s, int n){
    if(n == a.size()){
        cout<<s<<" ";
        return;
    }
    for(int i=0; i<keypad[a[n]].size(); i++){
        s += keypad[a[n]][i];
        generator(a, s, n+1);
        s.pop_back();
    }
}
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; vector<int> a;
	    for(int j=0; j<n; j++){
	        int l; cin>>l;
	        a.push_back(l);
	    }
	    generator(a, "", 0);
	    cout<<endl;
	}
	return 0;
}