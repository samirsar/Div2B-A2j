#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if((x==1||x==0)&&y==0)
    {
        cout<<"0"<<endl;

    }
    else
    {
        if(x>0&&(y>=0))
        {
            cout<<(1+(abs(x)-1)*4)<<endl;
        }
        else
        {
            if(x<=0&&y>0)
            {
                if(x==0)
                    cout<<(2+(abs(y)-1)*4)<<endl;
                else
                    cout<<(2+(abs(x)-1)*4)<<endl;
            }
            else
            {
                if(x<0&&y<=0)
                {
                    cout<<(3+(abs(x)-1)*4)<<endl;
                }
                else
                {
                    if(x>=0&&y<0)
                    {
                        if(x==0)
                          cout<<(4+(abs(y)-1)*4)<<endl;
                        else
                          cout<<(4+(abs(x)-1)*4)<<endl;
                    }
                }
            }
        }
    }
    return 0;

}
