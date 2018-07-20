using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; vector<int> odd, even;
	    for(int j=0; j<n; j++){
	        int l; cin>>l;
	        if(l%2 == 0){
	            even.push_back(l);
	        }else{
	            odd.push_back(l);
	        }
	    }
	    sort(odd.begin(), odd.end(), greater<int>());
	    sort(even.begin(), even.end());
	    for(auto it=odd.begin(); it!=odd.end(); it++){
	        cout<<*it<<" ";
	    }
	    for(auto yt=even.begin(); yt!=even.end(); yt++){
	        cout<<*yt<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}