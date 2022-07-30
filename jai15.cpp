#include<bits/stdc++.h>
using namespace std;
int pair_sum_equal(int arr[],int size)
{
    sort(arr,arr+size);
    int x=0;
    int arr1[size+1];
    for(int i=0;i<size;i++)
    {
        if(arr[i] != arr[i+1])
        {
            arr1[x++] = arr[i];
        }
    }
    size = x;
    int sum, sum1, count = 0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            sum = 0;
            sum = arr1[i]+arr1[j];
            for(int k=i+1;k<size-1;k++)
            {
                for(int l=k+1;l<size;l++)
                {
                    sum1 = 0;
                    sum1 = arr1[k]+arr1[l];
                    if(sum1 == sum)
                    {
                        cout<<arr1[i]<<arr1[j]<<arr1[k]<<arr1[l]<<"\n";
                        count+=2;
                    }
  
                }
            }
        }
    }

    return count;

}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<pair_sum_equal(arr,size);
}