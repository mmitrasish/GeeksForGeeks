int findLongestConseqSubseq(int arr[], int n)
{
    //Your code here
    sort(arr,arr+n);
    int max_len=INT_MIN, len=0;
    for(int j=0; j<n; j++){
        if(arr[j+1] == arr[j] + 1){
            len++;
        }else if(arr[j+1] == arr[j]){
            len = len;
        }else{
            len = 0;
        }
        if(max_len<len){
            max_len = len;
        }
    }
    return max_len+1;
}