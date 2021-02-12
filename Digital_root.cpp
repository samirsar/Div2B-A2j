#include<iostream>
using namespace std;
int main()
{
    int k,d;
    cin>>k>>d;
    if(k==1&&d==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(k>1&&d==0)
    {
        cout<<"No solution"<<endl;
        return 0;
    }
    for(int i=1;i<=k;i++)
    {
        if(i==1)
            cout<<d;
        else
            cout<<"0";
    }
    cout<<endl;
    return 0;
}
