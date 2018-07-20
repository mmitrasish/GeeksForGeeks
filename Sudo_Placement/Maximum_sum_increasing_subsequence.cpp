using namespace std;
int subseq(int a[], int n){
    int msis[n], max=0;
    for(int i=0; i<n; i++){
        msis[i] = a[i];
    }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[i]>a[j] && msis[i]<msis[j]+a[i]){
                msis[i] = msis[j] + a[i];
            }
        }
    }
    for(int i=0; i<n; i++){
        if(max<msis[i]){
            max = msis[i];
        }
    }
    return max;
}
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n; int arr[n];
	    for(int j=0; j<n; j++){
	        cin>>arr[j];
	    }
	    
	    cout<<subseq(arr, n)<<endl;
	}
	return 0;
}