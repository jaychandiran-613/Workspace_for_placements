#include<iostream>
using namespace std;
int main()
{
    int size,k;
    cout<<"enter the size :";
    cin>>size;
    cout<<"enter key element: ";
    cin>>k;
    int arr[size],temp;
    cout<<"enter elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>k)
        {
            temp = arr[i];
            arr[i] = k;

            for(int j=size;j>=i+1;j--)
            {
                if(j==i+1)
                {
                    arr[j] = temp;
                    
                }
                else{
                    arr[j] = arr[j-1];
                    
                }
            }
            break;
        }
    }
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nmiddle element of resultant array : "<<arr[size/2];

    /* input:
             5  (arrsize)
             3  (key)
             2 4 5 6 7  (ascending order)

             insert 3 in crt position

             2 3 4 5 6 7
             now print middle element of res array
             (4)
             */


}