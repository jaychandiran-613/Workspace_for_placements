#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int x;
    cin>>a;

    int days,hrs,mins,secs;

    a/=1000;
    days = a/86400;

    x = a % 86400;
    hrs = x/3600;

    x = x % 3600;
    mins=x/60;

    x = x % 60;
    secs=x;

    cout<<days<<" Days, "<<hrs<<" hours, "<<mins<<" minutes, "<<secs<<" seconds.";


}