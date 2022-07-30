#include<iostream>
#include<string>
using namespace std;
string res = "";
    void reverseWords(string S) 
    { 
        int pos = S.find('.');
        // code here
        if(pos==-1)
        {
            res.append(S);

        }
        else
        {

            string b = S.substr(0,pos);
            reverseWords(S.substr(pos+1));
            res.push_back('.');
            res.append(b);
            
            
        }
        
    }
int main()
{
    string name,name1;
    cin>>name;
    reverseWords(name);
    cout<<res;

}