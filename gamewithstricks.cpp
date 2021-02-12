#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int d=m*n;
    for(int i=1;i<=d;i++)
    {
        m=m-1;
        n=n-1;

        if(m==0||n==0)
        {
            if(i%2==0)
                cout<<"Malvika"<<endl;
            else
                cout<<"Akshat"<<endl;

            break;

        }

    }
    return 0;
}
