#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int count=0;
    for(int i=0;i<n-1;i++)
    {
        int x1,x2,x3,x4;
        x1=arr[i];
        x2=arr[i+1];
                if(x1>x2)
        {
            int temp=x1;
            x1=x2;
            x2=temp;
        }

        for(int j=0;j<n-1;j++)
        {
            x3=arr[j];
            x4=arr[j+1];

        if(x3>x4)
        {
            int temp=x3;
            x3=x4;
            x4=temp;
        }

        if((x1<x3&&x3<x2&&x2<x4)||(x3<x1&&x1<x4&&x4<x2))
        {
            cout<<"yes"<<endl;


            return 0;
        }
        }

    }

        cout<<"no"<<endl;
    return 0;
}
