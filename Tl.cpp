#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c[n],w[m],max1=0,max2=1001,min1=101;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        if(max1<c[i])
        {
            max1=c[i];
        }
        if(c[i]<min1)
        {
            min1=c[i];
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>w[i];
        if(max2>w[i])
            max2=w[i];
    }
    max2=max2-1;
    int high=min1*2;
    if(max1>max2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {

        if(high<=max1)
        {
            cout<<max1<<endl;
        }
        else
        {
            if(high<=max2)
            {
                cout<<high<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
    }
    //cout<<max1<<" "<<max2<<"  "<<min1<<endl;
    return 0;

}
