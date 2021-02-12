#include<iostream>
#include<vector>
using namespace std;
int show(int t)
{
    string s=to_string(t);
    int x=s.find('0');
    if(x==-1)
        return 0;
    else
        return 1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v1,v2;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(show(t))
            v1.push_back(t);
        else
            v2.push_back(t);
    }
    int d;
    if(v1.size()>=v2.size())
        {
            d=v1.size()+v2.size();

        }
    else
        {
            if(2*v1.size()<=n)
            {
                d=2*v1.size();

            }
            else
                d=n;

        }
        cout<<d<<endl;

    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    for(int i=0;i<d-v1.size();i++)
        cout<<v2[i]<<" ";

    cout<<endl;
    return 0;
}
