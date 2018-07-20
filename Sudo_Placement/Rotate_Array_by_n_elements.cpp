using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n, d; cin>>n>>d; vector<int> a;
	    for(int j=0; j<n; j++){
	        int t; cin>>t;
	        a.push_back(t);
	    }
	    for(int k=0; k<d; k++){
	        a.push_back(a.front());
	        a.erase(a.begin());
	    }
	    for(auto it=a.begin(); it!=a.end(); it++){
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}