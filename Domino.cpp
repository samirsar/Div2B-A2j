#include<iostream>
using namespace std;
void swap1(int *x,int *y)
{
int t=*x;
*x=*y;
*y=t;


}
int time=0;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int c=x,d=y;
    for(int i=2;i<=n;i++)
    {
        cin>>x>>y;
        if(x%2==0&&y%2!=0)
        {
            if(c%2!=0&&d%2==0)
            {
                swap1(&x,&y);
                time++;


            }
        }
        else
        {
            if(x%2!=0&&y%2==0)
            {
                if(c%2==0&&d%2!=0)
                {
                    swap1(&x,&y);
                    time++;
                }
            }
        }
        c+=x;
        d+=y;
    }
 if(c%2==0&&d%2==0)
 {
     cout<<time<<endl;
 }
 else
 {
     cout<<"-1"<<endl;
 }
    return 0;
}
