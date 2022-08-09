#include<bits/stdc++.h>
using namespace std;
/*


int main(){
    float p, r, t, CI, amount;
    
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time period in years: ";
    cin >> t;

    amount = p * (pow((1 + r/100), t));
    
    CI = amount - p;

    cout << "Compound interest is = " << CI << endl;
    return 0;
}

*/

int main()
{
    int size;

    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int count=0,pair,sum,i,j;

    cin>>pair;
    
    // [4,5,1,3,5,5]
    // 2
    // [4,5] [1,3] [5,5] 
    // count (if sum of pairs is even)
    i=0;
    bool check=true;;
    while(i<size)
    {
        int sum=0;
        for(j=1;j<=pair;j++)
        {
            if(i==size)
            {
                check=false;
            }
            sum+=arr[i];
            i++;
        }
        if((check == true) && (sum%2 ==0))
        {
            count++;
        }
        

    }
    if(count == 0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<count;
    }
}