#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;

    int total=0;
    int time=1,watch=0;
    for(int i=1;i<=n;i++)
    {
        int start,End;
        cin>>start>>End;
        if(x==1||start==1)
        {

            watch+=End-start+1;

            time=End+1;
        }
        else{
                 watch+=(start-time)%x+(End-start+1);

                    time=End+1;

        }
    }
    cout<<watch<<endl;
    return 0;

}
