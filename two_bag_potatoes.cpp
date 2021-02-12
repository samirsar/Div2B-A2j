#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int y,k,n;
    cin>>y>>k>>n;
    int x;
    vector<int>v;
    while(1)
    {
         n=(n/k)*k;
         if(y>=n)
            break;
         else
         {
             x=n-y;
             n=n-1;
             v.push_back(x);
         }
    }
    sort(v.begin(),v.end());
    if(v.size()==0)
        cout<<"-1"<<endl;
    else
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

    }
    cout<<endl;
    return 0;
}
