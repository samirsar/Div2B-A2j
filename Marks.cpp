#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int success=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int count=0;
            for(int k=0;k<n;k++)
            {
                //cout<<str[i][j]<<" "<<str[k][j]<<endl;
                if(str[i][j]<str[k][j])
                    count++;
            }
            if(count==0){
                success++;
                break;
            }
        }
    }
    cout<<success<<endl;
    return 0;

}
