#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void show(vector<int>v)
{
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    int count=0,remain=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum-v[i];
        remain+=v[i];
        count+=1;
        if(remain>sum)
        {
            break;
        }
    }
    cout<<count<<endl;
}
int main()
{
    //cout<<"Enter no. of coins"<<endl;
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    show(v);
}
