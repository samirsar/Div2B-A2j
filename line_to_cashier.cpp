#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cash[n];

    for(int i=0;i<n;i++)
    {
        cin>>cash[i];
    }
int min;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=1;j<=cash[i];j++)
        {
            int t;
            cin>>t;
            sum+=t*5+15;

        }
        if(i==0)
        {
            min=sum;
        }
        else
        {
            if(sum<min)
                min=sum;
        }
    }
    cout<<min<<endl;
    return 0;
}
