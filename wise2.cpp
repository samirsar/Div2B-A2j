#include<iostream>
#include<set>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int a,b,c,d;
    if((r1-c2+d1)%2!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    a=(r1-c2+d1)/2;

    b=r1-a;
    c=d2-b;
    d=d1-a;
    if(a+b==r1&&c+d==r2&&a+c==c1&&b+d==c2&&a+d==d1&&b+c==d2)
    {

    }
    else
    {
        cout<<"-1"<<endl;
        return 0;
    }
    set<int,greater<int>>s;
     if(a*b*c*d!=0)
     {
         s.insert(a);
         s.insert(b);
         s.insert(c);
         s.insert(d);
         if(s.size()==4)
         {
            auto i=s.begin();

             if(*i>9)
                cout<<"-1"<<endl;
             else
                 cout<<a<<" "<<b<<" "<<endl<<c<<" "<<d<<endl;

         }
         else
            cout<<"-1"<<endl;
     }
     else
     {
         cout<<"-1"<<endl;
     }
    return 0;
}
