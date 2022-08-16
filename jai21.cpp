#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int hrs;
    cin>>hrs;
    int in[hrs],out[hrs];
    for(int i=0;i<hrs;i++)
    {
        cin>>in[i];
    }
    for(int i=0;i<hrs;i++)
    {
        cin>>out[i];

    }
    int pre=0,max=INT_MIN;
    for(int i=0;i<hrs;i++)
    {
        pre += (in[i]-out[i]);
        if(pre>max)
        {
            max = pre;
        }

    }
    cout<<max;

    //4 [3,5,2,0] [0,2,4,4] max number of prople in party at any hrs
    
    }

*/

/*
int main()
{
    int t=3;
    int arr[4][4];
    float arr1[4]={0,0,0,0};
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>arr[i][j];
            arr1[j]+=arr[i][j];
        }
    }
    int max=INT_MIN;
    for(int i=1;i<=3;i++)
    {
        arr1[i] /=3;
        arr1[i] = round(arr1[i]);
        if(arr1[i]>max)
        {
            max=arr1[i];
        }
    }
    for(int i=1;i<=3;i++)
    {
        if(arr1[i]==max)
        {
            cout<<i;

        }
    }


 //After trainee are finished with all rounds, calculate for each trainee 
 //his average oxygen level over the 3 rounds and select one with highest 
 //oxygen level as the most fit trainee. If more than one trainee attains the 
 //same highest average level, they all need to be selected.
}



int compare(string s1,string s2)
{
    int i=0;
    bool check=false;
    int x;
    x = s1.length()*s2.length();
    while(s1[i] != '\0')
    {
        int j=0;
        while(s2[j] != '\0')
        {
            if(s1[i] == s2[j])
            {
                check=true;
                break;
            }
            j++;
        }
        if(check){break;}
        i++;
    }
    if(check){
        return 0;
    }
    return x;


}
int main()
{
    // argc gfds scxasd qwet
    string s;

    getline(cin,s);
    
    string s1[10];
    int size1=0;
    string word = "";

    for (auto x : s) 
    {
        if (x == ' ')
        {
            s1[size1++]=word;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    s1[size1++]=word;
    int c,max=-1;
    for(int i=0;i<size1-1;i++)
    {
        for(int j=i+1;j<size1;j++)
        {
            c = compare(s1[i],s1[j]);
            if(c>max)
            {
                max=c;
            }
        }
    }
    cout<<max;

}

*/

int main()
{
    int z=10;
    register int *x=&z;
    //int *y=&x;
    cout<<x;
}
