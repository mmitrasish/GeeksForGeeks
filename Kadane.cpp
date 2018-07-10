using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    int max_so = INT_MIN, max = 0;
	    for(int j=0; j<n; j++){
	        cin>>arr[j];
	    }
	    for(int k=0; k<n; k++){
	        max += arr[k];
	        if(max_so<max){
	            max_so = max;
	        }
	        if(max<0){
	            max =0;
	        }
	    }
	    cout<<max_so<<endl;
	    
	}
	return 0;
}