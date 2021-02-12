#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int wina=0,draw=0,winb=0;
    for(int i=1;i<=6;i++)
    {
        int d=abs(i-a)-abs(i-b);
        if(d<0)
            wina++;
        if(d==0)
            draw++;
        if(d>0)
            winb++;
    }
    cout<<wina<<" "<<draw<<" "<<winb<<endl;
    return 0;
}
