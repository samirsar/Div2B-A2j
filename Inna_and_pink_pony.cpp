#include<iostream>
#include<math.h>
#include<set>
using namespace std;
struct corner
{
    int x,y;
};
int main()
{
    int n,m,i,j,a,b;
    cin>>n>>m>>i>>j>>a>>b;
    set<int>s;
    corner c[4]={1,m,
                 n,1,
                 n,m,
                 1,1};
    for(int k=0;k<4;k++)
    {
        int p,q;
        p=abs(c[k].x-i);
        q=abs(c[k].y-j);
       // cout<<"hii"<<endl;
        if(p%a==0&&q%b==0)
        {
            cout<<p<<" "<<q<<endl;
            if((p/a)%2==(q/b)%2)
            {
                int d=max(p/a,q/b);
                s.insert(d);

            }
        }
    }
    if(s.size()!=0)
    {
        auto i=s.begin();
        cout<<*i<<endl;
    }
    else
    {
        cout<<"Poor Inna and pony!"<<endl;
    }
    return 0;

}
