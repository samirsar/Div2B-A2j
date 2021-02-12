#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int bad=0,good=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                bad++;
            }
            else
            {
                good+=bad+1;
                bad=0;
            }
        }
        if(bad>good)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
