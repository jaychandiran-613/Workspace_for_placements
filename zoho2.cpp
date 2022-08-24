#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int i=0;
    cin>>s1>>s2;
    
    string out1="";
    string out2="";
    bool check = false;
    while(s1[i] != '\0')
    {
        if((s1[i]==s2[i]) && (check))
        {
            check=false;
            cout<<out1<<","<<out2<<endl;
            out1.clear();
            out2.clear();
        }
        else if(s1[i]!=s2[i])
        {
            out1.push_back(s1[i]);
            out2.push_back(s2[i]);
            check=true;
        }
    i++;
    }
    if(check)
    {
        cout<<out1<<","<<out2<<endl;
    }
}