#include<iostream>
using namespace std;
int main()
{
    int k,l,r,t,x,y;
    cin>>k>>l>>r>>t>>x>>y;
    for(int i=1;i<=t;i++)
    {
        if(k<x)
        {
            if(k<l)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            k=k+y;
            if(k<x)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                k=k-x;
                if(k<l)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        else
        {
            k=k-x;

            if(k<l)
            {
                cout<<"NO"<<endl;
                return 0;

            }
            else
            {
                if(k>=l&&k+y<=r)
                    k=k+y;
            }
        }
    }
   if(k>=l)
   {
       cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}
