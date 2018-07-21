#include<bits/stdc++.h>
using namespace std;

void pm(string s,int beg,int end,vector<string>&v)
{
    if(beg==end)
    {
        v.push_back(s);
    }
    else
    {
        for(int i=beg;i<=end;i++)
        {
            swap(s[beg],s[i]);
            pm(s,beg+1,end,v);
            swap(s[beg],s[i]);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        vector<string>v;
        cin>>s;
        pm(s,0,s.size()-1,v);
        sort(v.begin(),v.end());
        for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}