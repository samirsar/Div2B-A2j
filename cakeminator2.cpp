#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int row[11]={0},col[11]={0};
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            char c;
            cin>>c;
            if(c=='S')
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(row[i]==0||col[j]==0)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
