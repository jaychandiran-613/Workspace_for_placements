#include<bits/stdc++.h>
using namespace std;

class swarm{
    public:
    int value;
    int x=0,y=0;
    bool status=true;
};

class operation{

    public:

    void begin(){
        swarm s[1].x=1;swarm s[1].y=1;swarm s[1].value=1+rand()%4;
        swarm s[2].x=1;swarm s[2].y=2;swarm s[2].value=1+rand()%4;
        swarm s[3].x=1;swarm s[3].y=3;swarm s[3].value=1+rand()%4;
        swarm s[4].x=1;swarm s[4].y=4;swarm s[4].value=1+rand()%4;
        swarm s[5].x=1;swarm s[5].y=5;swarm s[5].value=1+rand()%4;
        swarm s[6].x=1;swarm s[6].y=6;swarm s[6].value=1+rand()%4;
        swarm s[7].x=2;swarm s[7].y=2;swarm s[7].value=1+rand()%4;
        swarm s[8].x=2;swarm s[8].y=3;swarm s[8].value=1+rand()%4;
        swarm s[9].x=2;swarm s[9].y=4;swarm s[9].value=1+rand()%4;
        swarm s[10].x=2;swarm s[10].y=5;swarm s[10].value=1+rand()%4;
        swarm s[11].x=3;swarm s[11].y=3;swarm s[11].value=1+rand()%4;
        swarm s[12].x=3;swarm s[12].y=4;swarm s[12].value=1+rand()%4;
    }
    void swarm_right_move()
    {
        for(int i=1;i<=12;i++)
        {
            swarm[i].y++;
        }
    }

    void swarm_left_move()
    {
        for(int i=1;i<=12;i++)
        {
            swarm[i].y--;
        }
    }

    bool check_left_boundary()
    {
        for(int i=0;i<=12;i++)
        {
            if(swarm[i].y==1)
            {
                return true;
            }

        }
        return false;
    }

    bool check_right_boundary()
    {
        for(int i=0;i<=12;i++)
        {
            if(swarm[i].y==8)
            {
                return true;
            }
        }
        return false;
    }
    

};

class bullet_operation{
    public:
    int x=0,y=0;
    void begin(int pos)
    {
        x=7;
        y=pos;
    }

    void bullet_move()
    {
        x--;
    }

    bool check_over()
    {
        if(x==1)
        {
            return true;
        }
        return false;
    }
};

class gun{

    public:

    int points=0;

    int x=8,y=0;

    void begin()
    {
        y=1+rand()%8;
    }

    void move_right_left(int i)
    {
        if(i==1)
        {
            y--;
        }
        else if(i==3)
        {
            y++;
        }
    }

    void point(int i)
    {
        if(i==0)
        {
            point++;
        }
        else
        {
            point--;
        }

    }

};
int main()
{
    bool game=true;
    string start;
    cin>>start;
    Box b;
    b.arr = begin();
    while(game)
    {

    }

}