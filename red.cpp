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
        string s1,s2;
        cin>>s1>>s2;
        int countr=0,countb=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]>s2[i])
            {
                countr++;
            }
            else
            {
                if(s1[i]<s2[i])
                {
                    countb++;
                }
            }
        }
    if(countr==countb)
    {
        cout<<"EQUAL"<<endl;

    }
    else{

    if(countr>countb)
    {
        cout<<"RED"<<endl;

    }
    else{

    if(countr<countb)
    {
        cout<<"BLUE"<<endl;

    }
    }
    }
    }
    return 0;
}
