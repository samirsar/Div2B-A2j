#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int m=*max_element(v.begin(),v.end());
    int mi=*min_element(v.begin(),v.end());

    int position1=find(v.begin(),v.end(),m)-v.begin();
    int position2=find(v.begin(),v.end(),mi)-v.begin();
    for(int i=position2+1;i<n;i++)
    {
        if(v[i]<=mi)
        {
            position2=i;
        }
    }
    if(position1>position2)
    {
        cout<<position1+1-1+n-position2-1-1;
    }
    else
        cout<<position1+1-1+n-position2-1;

    return 0;

}
