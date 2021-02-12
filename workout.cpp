#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=1;
    map<string,int>m;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(flag==1)
        {
            m["chest"]+=t;
            flag=2;
        }
        else{
                if(flag==2)
                {
                    m["biceps"]+=t;
                    flag=3;
                }

             else{
                if(flag==3)
                {
                    m["back"]+=t;
                    flag=1;
                }
               }
        }

    }

    int max=m["chest"];

    string str="chest";
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(max<i->second)
        {
            max=i->second;
            str=i->first;
        }
    }
    cout<<str<<endl;


    return 0;
}
