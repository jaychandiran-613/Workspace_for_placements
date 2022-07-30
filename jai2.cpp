#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int arr1[size],temp,sum=0;
    cout<<"enter the elements:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<size-1;i++)
    {
        sum+=abs(arr1[i])+abs(arr1[i+1]);
    }
    cout<<"sum of absolute : "<<sum;

}