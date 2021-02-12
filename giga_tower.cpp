
#include<iostream>
#include<algorithm>
using namespace std;
int luck(int a)
{
    string str=to_string(a);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='8')
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a;
    cin>>a;
    int n=a+1;

    while(1)
    {
        if(luck(n))
        {
            cout<<n-a<<endl;
            return 0;
        }
        else
        {
            n+=1;
        }
    }
    return 0;
}
