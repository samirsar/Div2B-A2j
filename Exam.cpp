#include<iostream>
using namespace std;
#include<stdlib.h>
void exam(int a,int &n,int &k)
{
    if(a+(n-1)*2==k)
    {
        cout<<n-1<<endl;
        exit(0);
    }
    else
    {
        k=k-a;
        n=n-1;
    }
}
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int count=n;
    if(n*2==k)
    {
        cout<<n<<"kii"<<endl;
        return 0;
    }
    for(int i=1;i<=count;i++){
    int a=5+(n-1)*2;
    int b=4+(n-1)*2;
    int c=3+(n-1)*2;

    if(c<=k)
    {
        exam(3,n,k);
    }
    else
    {
        if(b<=k)
        {
           exam(4,n,k);
        }
        else
        {
            if(a<=k)
            {
               exam(5,n,k);
            }
        }
    }
    }
    return 0;
}
