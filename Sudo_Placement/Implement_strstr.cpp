/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     //Your code here
    size_t pos = s.find(x);
    if(pos != string::npos){
        int x_pos = static_cast<int>(pos);
        return x_pos;
    }else return -1;
}