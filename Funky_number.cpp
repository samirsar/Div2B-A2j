#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    unordered_set<int>s;
    while(1)
    {
        int d=i*(i+1)/2;
        if(d>=n)
            break;
        else
        {
            s.insert(d);
            i++;
        }
    }
    for(auto m:s)
        {
            if(s.find(n-m)!=s.end())
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }
      cout<<"NO"<<endl;
    return 0;
}
