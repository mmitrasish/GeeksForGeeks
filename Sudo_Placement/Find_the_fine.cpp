using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n, date; cin>>n>>date; int c[n], p[n];
	    for(int j=0; j<n; j++){
	        cin>>c[j];
	    }
	    for(int j=0; j<n; j++){
	        cin>>p[j];
	    }
	    int sum =0;
	    if(date%2 == 0){
	        for(int k=0; k<n; k++){
	            if(c[k]%2 != 0){
	                sum += p[k];
	            }
	        }
	    }else{
	        for(int k=0; k<n; k++){
	            if(c[k]%2 == 0){
	                sum += p[k];
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}