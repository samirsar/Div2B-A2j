#include<iostream>
#include<algorithm>

using namespace std;
int fair(int a,int num,int m)
{
    if(num%a==0)
        return num;
    else
    {
        return (a,num+m,m);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=s[i]-48;
        }
        sort(arr,arr+n,greater<int>());
        int num=stoi(s);
        if(num%arr[0]!=0)
        {
            num=num+(arr[0]+arr[0]-num%arr[0]);
        }
        int m=arr[0];
        for(int i=1;i<n;i++)
        {
            num=fair(arr[i],num,m);
        }
        cout<<num<<endl;

    }
    return 0;
}
