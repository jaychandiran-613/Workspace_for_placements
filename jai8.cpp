#include<iostream>
using namespace std;
int main()
{
    int size,key;
    cout<<"enter the size : ";
    cin>>size;
    int arr[size],i,j;
    cout<<"enter the elements: \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key :";
    cin>>key;
    for(i=0;i<size;i++)
    {
        int sum=0,check=0;
        for(j=i;j<size;j++)
        {
            sum+=arr[j];
            if(sum==key)
            {
                check=1;
                break;
            }
        }
        if(check == 1)
        {
            break;
        }
    }
    cout<<"the starting index: "<<i<<"\nthe ending index: "<<j;

    /*
    input:
    5             size
    [1,2,3,4,5]   array
    12            key
    to find from which index to which index (the sum is equal to key)
    1st iteration   1
                    1+2
                    1+2+3
                    1+2+3+4    (no)
                    1+2+3+4+5  (no)
                    2
                    2+3
                    2+3+4
                    2+3+4+5
                    3+4+5  ==  12 (yes)

                    print(2,4)
                    from 2nr ele to 4th

                    */
                    
}

