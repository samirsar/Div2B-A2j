#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string n;
    cin>>n;
    for(int i=n.length()-1;i>=0;i--)
    {
        int d;
        if(n[i]-48<5)
        {
            cout<<"O-|";
            d=n[i]-48+1;
        }
        else
        {
            cout<<"-O|";
            d=n[i]-48-4;
        }
        for(int j=1;j<=5;j++)
        {
            if(j==d)
                cout<<"-";
            else
                cout<<"O";
        }
        cout<<endl;

    }
    return 0;
}
