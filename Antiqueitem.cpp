#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,price;
    cin>>n>>price;
    int count=0;
    set<int>s;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        for(int j=1;j<=t;j++)
        {
            int q;
            cin>>q;
            if(price>q)
            {

                s.insert(i);

            }

        }
    }
    if(s.size()==0)
    {
        cout<<s.size()<<endl;
    }
    else
    {
        cout<<s.size()<<endl;
        for(auto i=s.begin();i!=s.end();i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;

    }
    return 0;


}
