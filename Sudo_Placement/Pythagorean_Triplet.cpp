#include<bits/stdc++.h>
using namespace std;
void pythagoreanTriplet(vector<int> a){
    int k, l;
	for(int j=a.size()-1; j>1; j--){
	    k=0; l=j-1;
	    while(k<l){
	       if(a[j] == a[k] + a[l]){
	           cout<<"Yes"<<endl;
	           return;
	       }else if(a[j] > a[k] + a[l]) k++;
	       else l--;
	    }
	}
	cout<<"No"<<endl;
}
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; vector<int> a;
	    for(int j=0; j<n; j++){
	        int temp; cin>>temp;
	        a.push_back(temp*temp);
	    }
	    sort(a.begin(), a.end());
	    pythagoreanTriplet(a);
	}
	return 0;
}