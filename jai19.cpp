#include<bits/stdc++.h>
using namespace std;
string flames(string s1,string s2)
{

    for(int i=0;i<s1.length();i++)
    {
        int x = s2.find_first_of(s1[i]);
        if(x < s2.size())
        {
            s2.erase(s2.begin() + x);
            s1.erase(s1.begin() + i);
        }
    }

    int len = s1.length() + s2.length();
    cout<<len<<"\n\n\n";
    string s3 = "FLAMES";
    int count = 0;
    int pos = 0;


    while(s3.length() != 1)
    {
        count++;
        pos++;
        if(count == len)
        {
            //cout<<s3<<"\n";
            s3.erase(s3.begin() + (pos -1));
            count=1;
        }
        if(pos == s3.length())
        {
            pos=0;
        }

    }

    return s3;
}

int main()
{

    
    string s1,s2;
    cout<<"enter name 1: ";
    cin>>s1;
    cout<<"enter name 2: ";
    cin>>s2;
    cout<<flames(s1,s2);
    
}


