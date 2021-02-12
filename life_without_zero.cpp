#include<iostream>
using namespace std;
string change(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {
            str.replace(i,1,"");
            i=i-1;
        }
    }

    return str;
}
int main()
{
    int a,b,sum;
    cin>>a>>b;
    sum=a+b;
    string str1=to_string(a),str2=to_string(b);
    int c=stoi(change(str1));
    int d=stoi(change(str2));
    sum=stoi(change(to_string(sum)));
    //cout<<sum<<" "<<c+d<<endl;
    if(sum==(c+d))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
