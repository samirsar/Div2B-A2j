
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=-2000000000,r=2000000000;
    for(int i=1;i<=n;i++)
    {
        string s,c;
        int k;
        cin>>s>>k>>c;
        if(s==">")
        {

             c=="Y"?l=max(l,k+1):r=min(r,k);

        }
        else
        {
            if(s=="<")
            {
                c=="Y"?r=min(r,k-1):l=max(l,k);
            }
            else
            {
                if(s==">=")
                {
                    c=="Y"?l=max(l,k):r=min(r,k-1);
                }
                else
                {
                    if(s=="<=")
                    {
                        c=="Y"?r=min(r,k):l=max(l,k+1);
                    }
                }
            }
        }
    }
    if(l<=r)
        cout<<l<<endl;
    else
        cout<<"Impossible"<<endl;

    return 0;
}
