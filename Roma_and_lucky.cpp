#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int pos=0;
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='4'||str[i]=='7')
                count++;
        }
        if(count<=k)
            pos++;

    }
    cout<<pos<<endl;

    return 0;
}
