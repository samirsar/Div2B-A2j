#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d=0;
    int remain=0;

    for(int i=0;i<n-1;i++)
    {
       d=0;
       d=arr[i]-arr[i+1]-c;
       if(d>remain)
       {
           remain=d;
       }

    }
    cout<<remain<<endl;
    return 0;
}
