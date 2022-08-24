#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;

    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            int count=1;
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]==arr[j])
                {
                    arr[j] = -arr[j];
                    count++;
                }
            }
            cout<<arr[i]<<" - "<<count<<endl;
        }

    }
}