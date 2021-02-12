#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
struct R
{
    int f;
    int t;
};
int main()
{
    int n,k;
    cin>>n>>k;
    struct R s[n];
    set<int,greater<int>>p;
    for(int i=0;i<n;i++)
    {
        int d=0;
        cin>>s[i].f>>s[i].t;
        if(k>=s[i].t)
        {
            d=s[i].f;
        }
        else
        {
            d=s[i].f-(s[i].t-k);

        }
           p.insert(d);

    }
auto i=p.begin();
cout<<*i<<endl;

    return 0;

}
