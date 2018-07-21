/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    int i=0, flag = 1, num = 0;
    if(str[0] == '-'){
        i = 1;
        flag = -1;
    }
        while(str[i] != '\0'){
            if(str[i] >= '0' && str[i] <= '9'){
                num = num*10 + (str[i++] - '0');
            }
            else{
                return -1;
            }
        }
    
    return num*flag;
}