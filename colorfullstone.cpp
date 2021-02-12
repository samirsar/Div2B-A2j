#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    //cout<<s.length()<<" "<<t.length()<<endl;
    int x=0,count=1, j;
    for(int i=0;i<s.length();i++)
    {

        for( j=x;j<t.length();j++)
        {

            if(s[i]==t[j])
            {
                //cout<<i<<" "<<j<<endl;
               count++;
               x=j+1;
               break;
            }

        }
        if(j==t.length())
            break;
    }
    cout<<count<<endl;
    return 0;
}
