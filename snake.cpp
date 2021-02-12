#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int flag=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else
            {
                if(flag==1)
                {

                    if(j!=m)
                    {

                        cout<<".";
                    }
                    else
                    {
                        cout<<"#";
                        flag=0;
                    }
                }
                else
                {

                    if(j==1)
                        cout<<"#";
                    else
                    {
                        cout<<".";
                        if(j==m)
                            flag=1;

                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
