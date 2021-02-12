#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b)
{
    return a.second>b.second;
}
void sort(unordered_map<string, int>& M)
{

    // Declare vector of pairs
    vector<pair<string, int> > A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);

    // Print the sorted value

}

int main()
{
    int n;
    cin>>n;
    unordered_map<string,int>m;
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;

        for(int j=0;j<str.length();j++)
        {
            string s;
            s=str[j];
            m[s]+=1;

        }
    }
    for(auto k=m.begin();k!=m.end();k++)
    {
        cout<<k->first;
    }
    cout<<endl;
    //sort(m.begin(),m.end(),cmp);
    sort(m);
    auto i=m.begin();

    for(auto j=m.begin();j!=m.end();j++)
    {
        if(i->second==j->second)
            cout<<j->first;
        else
            break;
    }
    cout<<endl;
    return 0;
}
