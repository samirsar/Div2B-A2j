
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int min1=abs(a-b);
    int pos1=1,pos2=2;
    for(int i=3;i<=n;i++)
    {

        int t;
        cin>>t;

        if(abs(b-t)<min1){
            min1=abs(b-t);
            pos1=i-1;
            pos2=i;

        }

        b=t;
        if(i==n)
        {
            if(min1>abs(t-a)){
                min1=abs(t-a);
                pos1=i;
               pos2=1;
            }
        }
    }
    cout<<pos1<<" "<<pos2<<endl;
    return 0;
}
