using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; int a[n];
	    for(int j=0; j<n; j++){
	        cin>>a[j];
	    }
	    
	    for(int k=0; k<n-1; k++){
	        if(a[k] > a[k+1]){
	           cout<<a[k+1]<<" ";
	        }else{
	            cout<<-1<<" ";
	        }
	    }
	    cout<<-1<<endl;
	}
	return 0;
}