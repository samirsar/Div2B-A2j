#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=1;p<=t;p++)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        if(arr[0]+arr[1]+arr[3]<7)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int count=0;
            while(1)
            {
                sort(arr,arr+3,greater<int>());
                int x=arr[0];
            for(int i=0;i<3;i++)
            {
                if(x==arr[i])
                {
                    arr[i]=arr[i]-1;
                    count++;
                }
            }
            if(arr[0]==0&&arr[1]==0&&arr[2]==0)
                break;
            }
            int j=1;
            while(1)
            {
                if(count==7*j+2)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                if(count<7*j+2)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                j++;
            }
        }
    }
}
