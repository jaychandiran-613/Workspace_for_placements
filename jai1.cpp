#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int arr[size],arr1[size],temp,count=0;
    cout<<"enter the elements:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        arr1[i] = arr[i];
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr1[i]<<" ";
        if(arr[i] == arr1[i])
        {
            
            count++;
        }
    }

    cout<<"No.of elements doesnt change position: "<<count;
    //print no.of elements doesnt change their position even after sorting
    //[2,5,10,6]
    //after swaping[2,5,6,10]
    // print (2)
}