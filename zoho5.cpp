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
    int j=0;
    for(int i=0;i<size;i++)
    {
            int max=INT_MIN, pos1,temp,min=INT_MAX, pos;
            for(int i=j;i<size;i++)
            {
                if(max<arr[i])
                {
                    max=arr[i];
                    pos1=i;
                }
                if(min>arr[i])
                {
                    min=arr[i];
                    pos=i;
                }
                
            }
                if(i%2==0)
                {
                    temp=arr[j];
                    arr[j]=arr[pos1];
                    arr[pos1]=temp;
                    j++;
                }
                else
                {
                    temp=arr[j];
                    arr[j]=arr[pos];
                    arr[pos]=temp;
                    j++;
                }
        
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    // int min, max, max_com=INT_MAX, min_com=INT_MIN;
    // for(int i=0;i<size/2;i++)
    // {
    //     min=INT_MAX, max=INT_MIN;
    //     for(int i=0;i<size;i++)
    //     {
    //         if((max<arr[i]) && (max_com>arr[i]))
    //         {
    //             max=arr[i];
    //         }
    //         if((min>arr[i]) && (min_com<arr[i]))
    //         {
    //             min=arr[i];
    //         }
    //     }
    //     max_com=max;
    //     min_com=min;
    //     cout<<max<<" "<<min<<" ";

    // }



    // sort(arr,arr+size);

    // for(int i=0;i<(size/2);i++)
    // {
    //     cout<<arr[size-i-1]<<" ";
    //     cout<<arr[i]<<" ";
    // }
    
    // if((size%2) !=0)
    // {
    //     cout<<arr[(size/2)];
    // }
}