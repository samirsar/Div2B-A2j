#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1;k<=t;k++)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;

        string s1,s2,s3,s4;
        s1=s.substr(0,4);

        s2=s.substr(l-4,l);
        if(s1=="2020"||s2=="2020")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            s3=s2.substr(1,4);
            if(s1[0]=='2'&&s3=="020")
                cout<<"YES"<<endl;
            else
            {
                s3=s1.substr(0,2);
                s4=s2.substr(2,4);
                if(s3=="20"&&s4=="20")
                    cout<<"YES"<<endl;
                else
                {
                    s3=s1.substr(0,3);
                    if(s3=="202"&&s2[3]=='0')
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;


}
