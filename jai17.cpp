#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size],count=0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++)
    {
        if((((arr[i] & arr[i+1])*2) < (arr[i] | arr[i+1])) && (i<size-1) && (arr[i]<arr[i+1]))
        {
            count=1;
            while((((arr[i] & arr[i+1])*2) < (arr[i] | arr[i+1])) && (i<size-1) && (arr[i]<arr[i+1]))
            {
                cout<<arr[i]<<" "<<arr[i+1]<<endl;
                count++;
                i++;
            }
        }
        
            
    }
    cout<<count;
}