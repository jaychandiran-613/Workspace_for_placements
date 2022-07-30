#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    int size,count=0;
    cout<<"enter the name: ";
    cin>>name;
    size = name.length();
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(name[i]==name[j])
            {
                count++;
                break;

            }
        }
    }
    cout<<"count : "<<count;
    /*adamant---
    1.ada
    2.ama

    torito----
    1.torit
    2.orito
    */
   //print no.of pairs starting and ending with same letter in the string



}