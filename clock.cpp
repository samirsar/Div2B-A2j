#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>sx,sy;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        sx.insert(x);
        sy.insert(y);
    }
    int m=min(sx.size(),sy.size());
    cout<<m<<endl;
    return 0;

}
