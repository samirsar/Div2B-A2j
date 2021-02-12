#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j=n/2;
        for(int i=0;i<n/2;i++,j++)
        {
            if(s[i]=='R'&&s[j]=='L')
            {
                cout<<j+1<<" "<<i+1<<endl;
            }
            else
            {
                cout<<i+1<<" "<<j+1<<endl;
            }

        }
    return 0;
}
