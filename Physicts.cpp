#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int **p=new int*[n];
    for(int i=0;i<n;i++)
    {
        p[i]=new int [3];
        for(int j=0;j<3;j++)
            cin>>p[i][j];
    }
        int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
          sum=sum+p[j][i];

        }
        if(sum!=0)
            break;
    }
    if(sum==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
