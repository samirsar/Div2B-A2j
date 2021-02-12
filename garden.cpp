#include<iostream>
using namespace std;
int main()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    if(a-x!=b-y)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(a-x==b-y)
    {
        cout<<x<<" "<<b<<" "<<a<<" "<<y<<endl;
    }
    else
    {
        if(x==a)
        {
            cout<<x+b-y<<" "<<y<<" "<<x+b-y<<" "<<b<<endl;
        }
        else
        {
            if(y==b)
            {
                cout<<x<<" "<<y+a-x<<" "<<a<<" "<<y+a-x<<endl;
            }
        }

    }
    return 0;
}
