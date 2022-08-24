#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int  power;
    char element;
    bool check = true;
};

class Equation{

    public:

    int coff;
    int pair_size;

    Pair pair[10];

    void set_coff(int c)
    {
        this->coff=c;
    }

    void set_pair_ele(char ch,int size)
    {
        this->pair[size].element=ch;
    
    }

    void set_pair_pow(int i,int size)
    {
        pair_size = size;
        this->pair[size].power = i;
    
    }
   

};

Equation mul(Equation e1[],Equation e2[],int size1, int size2)
{
    Equation e3[size1+size2];
    int size=-1;
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            int pair_pos=-1;
            e3[++size].set_coff(e1[i].coff + e2[j].coff);
            for(int k=0;k<=e1[i].pair_size;k++)
            {
                if(e1[i].pair[k].check)
                {
                    e3[++size].set_pair_ele( e1[i].pair[k].element, ++pair_pos);
                    e3[size].set_pair_pow( e1[i].pair[k].power, pair_pos );
                    for(int l=0;l<=e2[i].pair_size;i++)
                    {

                    }

                }
                
            }

        }
    }

    

};
int main()
{
    int size1,size2;

    cout<<"enter lenghts of 2 equations: ";
    cin>>size1>>size2;

    string s1;
    
    for(int i=0;i<size1;i++)
    {
        int coff, no_pairs;
        cin>>coff;
        Equation equation1[i];
        equation1[i].set_coff(coff);
        cout<<"enter no.of variables : ";
        cin>>no_pairs;
        for(int j=0;j<no_pairs;j++)
        {
            char ch;
            int pow;
            cout<<"enter char: "<<j+1;
            cin>>ch;
            cin>>pow;
            equation1[i].set_pair_ele(ch,j);
            equation1[i].set_pair_pow(pow,j);
        }

        
    
    }

    for(int i=0;i<size2;i++)
    {
        int coff, no_pairs;
        cin>>coff;
        Equation equation2[i];
        equation2[i].set_coff(coff);
        cout<<"enter no.of variables : ";
        cin>>no_pairs;
        for(int j=0;j<no_pairs;j++)
        {
            char ch;
            int pow;
            cin>>ch;
            cin>>pow;
            equation2[i].set_pair_ele(ch,j);
            equation2[i].set_pair_pow(pow,j);
        }
    
    }
    
    //Equation result[50]=mul(equation1)
    
    
    

}