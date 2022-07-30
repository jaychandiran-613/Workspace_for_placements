#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n%2 !=0)
    {
        n--;
    }
    while(n!=0)
    {
        int sum1=0,sum2=0;
        for(int i=0;i<(n/2);i++)
        {
            sum1+=arr[i];
        }
        for(int i=(n/2);i<n;i++)
        {
            sum2+=arr[i];
        }
        if(sum1==sum2)
        {
            break;
        }
        n-=2;
    }
    cout<<n/2;

    // [2 1 3 1 5 0 6 0]
    // [2 1 3 1] == [5 0 6 0]
    // [2 1 3]  == [1 5 0]  yes print(3)
}