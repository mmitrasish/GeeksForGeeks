#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n;
	    int temp, desc=0, asc=0;
	    vector<int> a;
	    cin>>temp;
	    a.push_back(temp);
	    for(int j=1; j<n; j++){
	        cin>>temp;
	        if(a[j-1] < temp) asc++;
	        else if(a[j-1] > temp) desc++;
	        a.push_back(temp);
	    }
	    cout<<*max_element(a.begin(), a.end())<<" ";
	    
	    if(desc==0) cout<<1;
	    else if(asc == 0) cout<<2;
	    else if(asc<desc) cout<<3;
	    else cout<<4;
	    
	    cout<<endl;
	}
	return 0;
}