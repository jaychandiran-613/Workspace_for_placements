#include<bits/stdc++.h>
using namespace std;
int convert(int num)
{
    int sum=0, temp, mul=1;

    while(num>0)
    {
        temp = num%2;
        num/=2;
        sum+=(mul*temp);
        mul*=10;
    }

    return sum;
}

bool check_palin(int num)
{
    int size=0, arr[20], count=0;
    while(num>0)
    {
        arr[size++]=num%10;
        num/=10;
    }
    for(int i=0;i<size/2;i++)
    {
        if(arr[i]==arr[size-i-1])
        {
            count++;
        }
    }
    if(count == ( (size/2)) )
    {
        return true;
    }
    return false;

}
int main()
{
    int num, bin;
    cin>>num;

    bin=convert(num);


    if(check_palin(bin))
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }


}