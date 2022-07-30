
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr[5] , t ;
    int k=0, size, temp=0, i, j;
    string s="WELCOMETOZOHOCORPORATION";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
    cout<<"\n";
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(k < s.length())
            {arr[i][j] = s[k++];
            cout<<arr[i][j]<<"   ";      }
            else
            {
                arr[i][j] = ' ';
                cout<<arr[i][j]<<" ";
            }
            
        }
        cout<<"\n";
    }
    cin>>t;
    size = t.length();
    for(i=0;i<5;i++)
    {
        int g=0,m=0;
        for(j=0;j<5;j++)
        {
            if(arr[i][j] == t[g])
            {
                g++;
            }
            if(arr[j][i] == t[m])
            {
                m++;
                
            }
            if(g == (size) || m== (size))
            {
                temp =1;
                break;
            }

        }
        if(temp ==1)
        {
            break;
        }
    }
    if(temp == 0)
    {
        cout<<"could find that string.\n";
    }
    else
    {
        cout<< "Start index: <" << i << "," << j-size+1 << ">\n" ;
        cout<< "End   index: <" << i << "," << j   << ">\n" ;

    }
    
}