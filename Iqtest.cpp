#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n],even=0,odd=0,index1,index2;
    for(int i=0;i<n;i++)
    {

        cin>>t[i];
        if(t[i]%2!=0)
        {
            odd+=1;
            index1=i+1;

        }
        else
        {
            even+=1;
            index2=i+1;
        }
    }
    if(odd==1)
    {
        cout<<index1<<endl;
    }
    else
    {
        cout<<index2<<endl;
    }
    return 0;
}
