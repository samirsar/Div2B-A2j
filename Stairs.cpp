#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int move;
    for(int i=0;i<=n;i++)
    {
     move=0;
        move+=n/2-i;
        move+=n-move*2;
        if(move%m==0)
        {

            cout<<move<<endl;
            break;
        }

    }
    return 0;
}
