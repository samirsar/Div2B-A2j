#include<iostream>
using namespace std;
int luck(int i)
{
    string str=to_string(i);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='4')
        {
            if(str[i]!='7')
                return 0;
        }
    }
    return 1;
}
int main()
{
    //cout<<"Enter number for checking"<<endl;
    int N;
    cin>>N;
    int count=0;
    for(int i=1;i<=N;i++)
    {
        if(luck(i))
        {
           if(N%i==0)
           {
               cout<<"YES"<<endl;
               count+=1;
               break;
           }
        }
    }
    if(count==0)
        cout<<"NO"<<endl;

    return 0;
}
