#include<iostream>
#include<algorithm>
using namespace std;
struct dragon
{
    int strength;
    int bonus;
};
bool cmp(struct dragon a,struct dragon b)
{
    return a.strength<b.strength;
}
int main()
{
    int s,n;
    cin>>s>>n;
    int count=0;
    struct dragon d[n];
    for(int i=0;i<n;i++)
    {
        cin>>d[i].strength>>d[i].bonus;

    }
    sort(d,d+n,cmp);

    for(int i=0;i<n;i++)
    {
        if(s>d[i].strength)
        {
            count+=1;
            s+=d[i].bonus;
        }
    }
    if(count==n)
      cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
