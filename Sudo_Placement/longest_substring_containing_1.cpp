/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

int maxlength( string s)
{
// your code here
    int s_len = s.length(), len=0, max_len=INT_MIN;
    for(int i=0; i<s_len; i++){
        if(s[i]=='1'){
            len++;
        }else{
            len = 0;
        }
        if(len>max_len){
            max_len = len;
        }
    }
    return max_len;
}