#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    for(int i=input;i>0;i--)
    {
        
        for(int j=input;j>0;j--)
        {
           if(i>=j)
           {
            cout<<i<<" ";
           }
           else{
            int diff=j-i;
            cout<<i+diff<<" ";
           } 
        }
        cout<<endl;
    }
}