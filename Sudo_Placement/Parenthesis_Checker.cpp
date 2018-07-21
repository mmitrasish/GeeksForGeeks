#include<bits/stdc++.h>
using namespace std;
char str[100];
int top;
bool chk(string s,int n)
  {
      for(int i = 0;i<n;i++)
      {
          if(s[i] == '[' or s[i] == '{' or s[i] == '(')
            str[++top] = s[i];
          else
            {
                if((s[i] == ']' and str[top] == '[') or 
                   (s[i] == '}' and str[top] == '{') or
                   (s[i] == ')' and str[top] == '('))
                    top--;
                else
                    return false;
            }
      }
  }
int main() {
	//code
	int t,n,c;
	string s;
	cin>>t;
	for(int i =0;i<t;i++)
	{   c = 0;
	    top = -1;
	    cin>>s;
	    n= s.length();
	    if(chk(s,n) and top == -1)
	        cout<<"balanced\n";
	    else
	        cout<<"not balanced\n";
	}
	return 0;
}