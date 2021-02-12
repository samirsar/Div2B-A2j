#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[101]={0};
    int x,y;
    cin>>x>>y;
    for(int i=x;i<y;i++)
    {
        arr[i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        int l,r;
        cin>>l>>r;
        for(int j=l;j<y;j++)
        {
            if(j==r)
                break;
            else
            {
                arr[j]=0;
            }
        }

    }
    int count=0;
    for(int i=x;i<y;i++)
    {
        if(arr[i]==1)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
