#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    string arr[r];
    for(int i=0;i<r;i++)
    {
            cin>>arr[i];
        for(int j=0;j<arr[i].length();j++)
        {
            if(arr[i][j]=='.')
            {
                arr[i][j]='B';
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c-1;j++)
        {
            if(arr[i][j]=='B'&&arr[i][j+1]=='B')
            {
                arr[i][j+1]='W';
            }
        }
    }
    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r-1;i++)
        {
            if(arr[i][j]=='B'&&arr[i+1][j]=='B')
            {
                arr[i+1][j]='W';
            }
            else
            {
                if(arr[i][j]=='W'&&arr[i+1][j]=='W')
                {
                    arr[i+1][j]='B';
                }
            }
        }
    }

    for(int i=0;i<r;i++)
    {
            cout<<arr[i];
        cout<<endl;

    }
    return 0;
}
