#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int time[n],t=0,sing=0;
    for(int i=0;i<n;i++)
    {
        cin>>time[i];
        sing+=time[i];
        if(i!=n-1)
        {
            t=t+time[i]+10;
        }
        else
            t+=time[i];
    }
    if(t<=d)
    {
        int joke=(d-sing)/5;
        cout<<joke<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
