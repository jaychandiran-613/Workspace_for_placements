#include<bits/stdc++.h>
using namespace std;
sorting_possible(int num,int M,int arr[][2])
{
    int arr1[num],y=0, val=1,count=0;

    for(int i=num;i>0;i--)
    {
        arr1[y++]=(i);
        val*=i;
    }

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-1;j++)
        {
            if(1)
            {
                int temp;
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
            bool check=true;
            for(int k=0;k<num;k++)
            {
                cout<<" "<<arr1[k];
                for(int m=0;m<M;m++)
                {
                    
                    if(((k+1) == arr[m][1]) && (arr1[k] == arr[m][0]))
                    {
                        check=false;
                    }

                }
            }
            cout<<"\n";
            if(check){count++;}
        }
    }
    return count;

}
int main()
{
    int M,N;
    cout<<"enter the no.of person: ";
    cin>>N;
    cout<<"enter no.of discomfort: ";
    cin>>M;
    int arr[M][2];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<sorting_possible(N,M,arr);

}
