#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int n;
        cin>>n;
        int arr[n],arr1[n];
        for(int p=0;p<n;p++)
        {
            cin>>arr1[p];
        }
        int flag=0;
        int k=n-1,j=0;

        for(int p=0;p<n;p++)
        {

            if(flag==0)
            {
                arr[p]=arr1[j];
                flag=1;
                j++;
            }
            else
            {
                if(flag==1)
                {
                    arr[p]=arr1[k];
                    flag=0;
                    k--;
                }
            }
        }
        for(int p=0;p<n;p++)
        {
            cout<<arr[p]<<" ";
        }
        cout<<endl;


    }
}
