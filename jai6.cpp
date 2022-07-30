#include<iostream>
#include<string.h>
using namespace std;

string checkdd(char d1,char d2,char m1,char m2)
{
    string DD = "",MM = "";
    DD.push_back(d1);
    DD.push_back(d2);
    MM.push_back(m1);
    MM.push_back(m2);
    cout<<DD<<" "<<MM <<endl;
    int d = stoi(DD);
    int m = stoi(MM);
    if(((d<=31) && (m==01||m==03||m==05||m==07 || (m%8)==0 ||m==10||m==12)) || (d<=30 && (m==04||m==06 || (m%9)==0 ||m==11)) || (d<28 && m==2))
    {
        return to_string(d)+" "+to_string(m);
    }
    else{
        return "-1 -1";
    }

} 

int main()
{
    string month[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    cout<<"1.15/03/2022\n"<<"2.2022/03/15\n"<<"3.Feb 15,2020\n";
    string name="",dd="";
    int type;
    cout<<"enter type: ";
    cin>>type;
    cout<<"enter date: ";
    cin>>name;

    if(type==1)
    {
        dd+= checkdd(name[0],name[1],name[3],name[4]);
        if(dd != "-1 -1")
        {
            dd.append(" ");
            dd.push_back(name[6]);
            dd.push_back(name[7]);
            dd.push_back(name[8]);
            dd.push_back(name[9]);
       }
        else{
            dd+=" -1";
        }
    }
    else if(type == 2)
    {
        dd+= checkdd(name[8],name[9],name[5],name[6]);
        if(dd != "-1 -1")
        {
            dd.append(" ");
            dd.push_back(name[0]);
            dd.push_back(name[1]);
            dd.push_back(name[2]);
            dd.push_back(name[3]);
       }
        else{
            dd+=" -1";
        }

    }
    else if(type == 3)
    {
        int i;
        string mon="";
        mon.push_back(name[0]);
        mon.push_back(name[1]);
        mon.push_back(name[2]);

        for(i=0;i<12;i++)
        {
            if(month[i] == mon)
            {
                i++;
                break;
            }
        }
        string s= to_string(i);
        dd+= checkdd(name[4],name[5],s[1],s[0]);
        if(dd != "-1 -1")
        {
            dd.append(" ");
            dd.push_back(name[7]);
            dd.push_back(name[8]);
            dd.push_back(name[9]);
            dd.push_back(name[10]);
       }
        else{
            dd+=" -1";
        }

    }
    else{
        cout<<"enter correct ttype.\n";
        return 0;
    }
    cout<<"The final date: "<<dd;


}