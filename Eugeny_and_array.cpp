#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int pos=0,neg=0;
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        if(c>0)
            pos++;
        if(c<0)
            neg++;
    }
    int t;
    if(neg>pos)
        t=pos;
    else
        t=neg;

    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        if((r-l+1)%2==0&&(r-l+1)<=2*t)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }

    /*for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        int d=r-l+1;
        if(d%2==0)
        {
           if(pos>=d/2&&neg>=d/2)
                cout<<"1"<<endl;
          else
            cout<<"0"<<endl;
        }
        else
            cout<<"0"<<endl;

    }*/
    return 0;
}
