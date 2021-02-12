#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        for(int j=1;j<=k-1;j++)
        {

            cout<<"a";
        }
        int flag=1;
        for(int j=1;j<=n-k+1;j++)
        {
          if(flag==1)
            {
                cout<<"a";
                flag=2;
            }
            else
            {
                if(flag==2)
                {
                    cout<<"b";
                    flag=3;
                }
                else
                {
                    if(flag==3)
                    {
                        cout<<"c";
                        flag=1;
                    }
                }
            }
        }
    cout<<endl;
    }
    return 0;
}
