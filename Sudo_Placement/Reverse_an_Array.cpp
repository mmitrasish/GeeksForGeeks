using namespace std;
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
	    reverse(a.begin(), a.end());
	    for(auto it=a.begin(); it!= a.end(); it++){
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}