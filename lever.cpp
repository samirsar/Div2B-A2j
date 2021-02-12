#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int center=s.find('^');
    center+=1;
    int torque=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>48&&s[i]<=57)
        {
            torque+=(s[i]-48)*(center-i-1);
        }
    }
    if(torque==0)
        cout<<"balance"<<endl;
    else
    {
        if(torque>0)
            cout<<"left"<<endl;
        else
            cout<<"right"<<endl;
    }
    return 0;
}
