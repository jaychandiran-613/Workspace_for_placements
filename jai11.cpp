#include<iostream>
using namespace std;
int main()
{ 
    int n,t=5,rem=0;
    cout<<"enter no.of patients: ";
    cin>>n;
    int arr[n],wait[n];
    cout<<"enter arrival timing of each patient in mins: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(rem>=arr[i])
        {
            wait[i] = (rem-arr[i]);
        }
        else
        {
            wait[i] = 0;
            rem = arr[i];
        }
        rem += 10;
    }
    //cout<<"last person to wait is : "<<wait[n-1];
    for(int i=0;i<n;i++)
    {
        cout<<wait[i]<<"\n";
    }
}