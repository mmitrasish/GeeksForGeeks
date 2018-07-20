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
	    int m; cin>>m;
	    sort(a, a+n);
	    int min_diff = INT_MAX;
	    int first = 0, last = 0;
        for (int i=0; i+m-1<n; i++){
            int diff = a[i+m-1] - a[i];
            if (diff < min_diff){
                min_diff = diff;
                first = i;
                last = i + m - 1;
            }
        }
        cout<<abs(a[last]-a[first])<<endl;
	}
	return 0;
}