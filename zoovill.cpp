#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)
        cout<<n<<endl;
    else
    {
        int b1=n/10;
        string str=to_string(n);
        str.replace(str.length()-2,1,"");
        int b2=stoi(str);
        if(b1>b2)
            cout<<b1<<endl;
        else
            cout<<b2<<endl;
    }
    return 0;
}
