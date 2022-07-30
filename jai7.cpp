#include<iostream>
#include<cmath>
using namespace std;

/*
------------1--------RGRGGG color
int main()
{
    int size,c1=0,c2=0;
    string name;
    cout<<"enter the size: ";
    cin>>size;
    cout<<"enter the string: ";
    cin>>name;
    for(int i=0;i<size;i++)
    {
        if(name[i]=='R')
        {
            c1++;
        }
        else if(name[i]=='G')
        {
            c2++;
        }
        else
        {
            cout<<"enter correctly.\n";
            return 0;
        }
    }
    if(c1<c2)
    {
        cout<<"Result: "<<c1;
    }
    else
    {
        cout<<"Result: "<<c2;
    }
}
*/

/*
-------------2----------------- substring with same words with same frequency
int main()
{
    int size,count[26]={0},count1[26]={0},c=0,j;
    string name;
    cout<<"enter the string: ";
    cin>>name;
    size = name.length();
    for(int i=0;i<(size/2);i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            int j = name[i]-'a';
            count[j]+=1;
        }

    }
    if(size%2==0)
    {
        j=size%2;
        
    }
    else
    {
        j=(size/2)+1;
    }
    for(int i=j;i<size;i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            int j = name[i]-'a';
            count1[j]+=1;
        }

    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==count1[i])
        {
            c++;
        }
    }
    if(c==26)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

*/

/*
-----------3---------  goals on penalty
int main()
{
    string name;
    int size,count=0;
    cout<<"enter the name: ";
    cin>>name;
    size = name.length();
    for(int i=0;i<size-1;i++)
    {
        if(name[i]=='2' && name[i+1]=='1')
        {
            count++;
        }
    }
    cout<<"The result: "<<count;
}

*/

/*
//----------4----------pappu 6 and 9 
int main()
{
    int a,b,c,i=0,s=0;
    cout<<"enter the amount: ";
    cin>>a;
    c=a;
    while(a>0)
    {
        b=a%10;
        if(b==6)
        {
            b=9;
        }
        s= s + (b* pow(10,i++));
        a/= 10;
    }
    cout<<"The result amount: "<<s-c<<endl;
}

*/


//--------------5----------- Varun name
int main()
{
    string name;
    int size;
    cout<<"enter the name: ";
    cin>>name;
    size=name.length();
    for(int i=0;i<size;i++)
    {
        name[i]=219-name[i];
    }
    cout<<"The resultant name: "<<name;

}



