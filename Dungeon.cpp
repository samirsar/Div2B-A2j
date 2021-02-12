#include<iostream>
using namespace std;
int check(int &x,int &y,int& z,int &shot)
{

           if(x!=0)
            {
                x--;
                shot++;
            }
            if(y!=0)
            {
                y--;
                shot++;
            }
            if(z!=0)
            {
                z--;
                shot++;
            }
            if(x==0&&y==0&&z==0)
            {
                return 1;
            }
            else
                return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int p=1;p<=t;p++)
    {
        int shot=0,x,y,z,i=1;
        cin>>x>>y>>z;
        while(1)
        {
            if(x+y+z<7*i-shot)
            {
                cout<<"NO"<<endl;
                break;
            }
            if(x!=1)
            {
                x--;
                shot++;
            }

            if(x==0&&y==0&&z==0)
            {
                cout<<"NO"<<endl;
                break;
            }
            if(shot+1==7*i)
            {
                i++;
                if(check(x,y,z,shot))
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(y!=1)
            {
                y--;
                shot++;
            }

            if(x==0&&y==0&&z==0)
            {
                cout<<"NO"<<endl;
                break;
            }
            if(shot+1==7*i)
            {
                i++;
                if(check(x,y,z,shot))
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(z!=1)
            {
                z--;
                shot++;
            }

            if(x==0&&y==0&&z==0)
            {
                cout<<"NO"<<endl;
                break;
            }
            if(shot+1==7*i)
            {
                i++;
                if(check(x,y,z,shot))
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }


        }
    }
}
