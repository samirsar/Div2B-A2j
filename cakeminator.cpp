#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];

        }
    }

     int count1=0;
    for(int i=0;i<r;i++)
    {
        count1=0;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]=='S')
                count1+=1;
        }
        if(count1==0)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]='T';
            }
        }
    }

    int count2=0;
    for(int i=0;i<c;i++)
    {
        count2=0;
        for(int j=0;j<r;j++)
        {
            if(arr[j][i]=='S')
                count2+=1;
        }
        if(count2==0)
        {
            for(int j=0;j<r;j++)
            {
                arr[j][i]='T';
            }
        }
    }
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]=='T')
                count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
