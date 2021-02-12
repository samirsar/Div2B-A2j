#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int a=sqrt(a1*a2/a3);
    int b=sqrt(a1*a3/a2);
    int c=sqrt(a2*a3/a1);
    cout<<4*a+4*b+4*c<<endl;
    return 0;
}
