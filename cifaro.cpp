#include<iostream>
using namespace std;
int main()
{
    int k,l;
    cin>>k>>l;
    int la=0;
    int count=k;
    if(k==l)
    {
        cout<<"YES"<<endl<<"0"<<endl;
        return 0;
    }
    if(l%k==0)
    {

        for(int i=1;i<=l/k;i++)
        {
            count=count*k;
            if(count>l)
                break;
            else
            {
                if(count==l)
                {
                    la=i;
                }
            }
        }
        if(la!=0)
            cout<<"YES"<<endl<<la<<endl;
        else
            cout<<"NO"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
