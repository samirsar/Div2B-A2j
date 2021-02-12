#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int n;
    cin>>n;
    int arr[3]={0};
    arr[n-1]=1;
    for(int i=1;i<=3;i++)
    {
        int a,b;
        cin>>a>>b;
        int temp=arr[a-1];
        arr[a-1]=arr[b-1];
        arr[b-1]=temp;
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]==1)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
