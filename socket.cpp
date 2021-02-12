#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(k>=m)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
    {
        sort(arr,arr+n,greater<int>());
        int total=0;
        for(int i=0;i<n;i++)
        {
          total+=arr[i];
          int d;
          if(k>0)
          {
              d=--k+total;

          }
           else
           {
               d=total;
           }

            if(d>=m)
            {
                cout<<i+1<<endl;
                return 0;
            }
            else
            {
                if(k==0)
                    total+=-1;
            }


        }
    }
    cout<<"-1"<<endl;
    return 0;

}
