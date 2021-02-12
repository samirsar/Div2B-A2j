#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int flag=1;
    for(int i=1;i<=n;i++)
    {
        if(flag==1)
        {
            cout<<i+1<<" ";
            flag=0;
        }
        else
        {
           cout<<i-1<<" ";
           flag=1;
        }

    }
    cout<<endl;
    return 0;
}
