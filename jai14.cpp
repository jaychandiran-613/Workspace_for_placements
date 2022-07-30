#include<bits/stdc++.h>
#include<string>
using namespace std;
/*
int main()
{
    string s1,s2,s3;
    cout<<"enter s1: ";
    cin>>s1;
    cout<<"enter s2: ";
    cin>>s2;
    int s,check =0;
    s = s1.length();
    while(s>0)
    {
        s3=s1;
        if(s1 == s2)
        {
            check=1;
            break;
        }
        s1=s1.substr(1);
        s1.push_back(s3[0]);
        s--;

    }
    cout<<"the result: "<<check;
}

*/

/*
int main()
{
    int n,check=0,x;
    cout<<"enter number to check the presence of 0 in it.: ";
    cin>>n;
    while(n>0)
    {
        x=n%10;
        if(x==0)
        {
            check=1;
            break;
        }
        n/=10;
    }
    if(check==1)
    {
        cout<<"YES\n";
    }
    else{cout<<"NO\n";}
}

*/

/*
int main()
{
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"enter the elements: \n";
    int arr[n],sumeven=0,sumodd=0,suml=0,sumr=0,m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0){sumeven+=arr[i];}
        else{sumodd+=arr[i];}
    }
    if(n%2==0)
    {
        m=n/2;
    }
    else
    {
        m = (n/2)+1;
    }
    for(int i=0;i<(n/2);i++)
    {suml+=arr[i];}
    for(int i=m;i<n;i++)
    {
        sumr+=arr[i];
    }
    cout<<  "sum of even th elements  : "<<sumeven<<"\nsum of odd  th elements: "<<sumodd;
    cout<<"\nsum of left side elements:"<<suml<<"\nsum of right side elements:"<<sumr;
}

*/
/*
int main()
{
    string sample;
    int check=0;
    cin>>sample;
    for(int i=0;i<sample.length();i++)
    {
        if(sample[i] != '0' && sample[i] != '1')
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        cout<<"TRUE\n";
    }
    else{ cout<<"NO\n";}
}

*/