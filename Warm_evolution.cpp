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
            int t;
            cin>>t;
            v.push_back(t);
        }


    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {

            if(i==j)
            continue;
            else
            {

                if(find(v.begin(),v.end(),v[i]+v[j])!=v.end())
                {
                    int d=find(v.begin(),v.end(),v[i]+v[j])-v.begin()+1;
                    cout<<d<<" "<<i+1<<" "<<j+1<<endl;
                    return 0;
                }
            }

        }
    }
    cout<<"-1"<<endl;
    return 0;
}
