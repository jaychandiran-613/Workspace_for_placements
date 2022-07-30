#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[size],sum[size],max=0;
    cout<<"enter the elements: ";
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
        sum[i]=0;
    }
    for(int i=1;i<=size;i++)
    {
        for(int j=i;j<=size;j=j+1+i)
        {
            sum[i]+=arr[j];
        }
        if(max<sum[i])
        {
            max=sum[i];
        }
        cout<<i<<" : "<<sum[i]<<"\n";

    }
    cout<<"The maximum indexed in an array: "<<max;
    /* [1,2,3,4,5,6]
    m[1]=a[1]+a[3]+a[5]   starting from 1st element and leave 1 element in between
    m[2]=a[2]+a[5]        starting from 2nd and leave 2 element
    m[3]=a[3]
    m[4]=a[4]
    m[5]=a[5]
    m[6]=a[6]
    max of it              print maximum of m array
    */          

}