#include<iostream>
using namespace std;


int main()
{
string suit="SHDC",card="6789TJQKA";
char psuit;
string pcard1,pcard2;
cin>>psuit>>pcard1>>pcard2;
    int r1=card.find(pcard1[0]);
    int r2=card.find(pcard2[0]);
if(psuit==pcard1[1])
{
    if(pcard1[1]!=pcard2[1])
        cout<<"YES"<<endl;
    else
    {
       if(r1>r2)
            cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
}
else
{
    if(pcard1[1]==pcard2[1])
    {
        if(r1>r2)
            cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

return 0;

}
