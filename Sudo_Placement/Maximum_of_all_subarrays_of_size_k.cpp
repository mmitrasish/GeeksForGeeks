using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n, m; cin>>n>>m; int a[n];
	    for(int j=0; j<n; j++){
	        cin>>a[j];
	    }
	    for(int j=0; j<n-m+1; j++){
	        int max = INT_MIN;
	        for(int k=j; k<j+m; k++){
	            if(max<a[k]) max = a[k];
	        }
	        cout<<max<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}