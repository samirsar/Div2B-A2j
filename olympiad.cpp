#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int t;
       cin>>t;
       v.push_back(t);
       if(t==1)
        m[1]+=1;
       if(t==2)
        m[2]+=1;
       if(t==3)
        m[3]+=1;
    }
    int min=n;
    for(int i=1;i<=3;i++)
    {
        if(m[i]<min)
            min=m[i];
    }
    cout<<min<<endl;
        int a=0,b=0,c=0;
    for(int i=1;i<=min;i++)
    {
        a=find(v.begin()+a,v.end(),1)-v.begin();
        b=find(v.begin()+b,v.end(),2)-v.begin();
        c=find(v.begin()+c,v.end(),3)-v.begin();

        cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
        a++;
        b++;
        c++;
    }
    return 0;
}
