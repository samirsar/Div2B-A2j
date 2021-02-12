#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int dif=10001,count=0;
    for(int i=1;i<n-1;i++)
    {
        count=0;
        for(int j=1;j<n;j++)
        {
            int d;
            if(i==j)
            {
                d=arr[j+1]-arr[j-1];
                j++;

            }
            else
                d=arr[j]-arr[j-1];

            if(d>count)
                count=d;


        }
        if(count<dif)
            dif=count;

    }
    cout<<dif<<endl;
    return 0;
}
