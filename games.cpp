#include<iostream>
using namespace std;
struct Team
{
    int home;
    int guest;
};
int main()
{
    int n,count=0;

    cin>>n;
    struct Team s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].home>>s[i].guest;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].home==s[j].guest)
                count+=1;
            if(s[i].guest==s[j].home)
                count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
