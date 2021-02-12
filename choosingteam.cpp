#include<iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int student[n];
    for(int i=0;i<n;i++)
    {
        cin>>student[i];
        int t=5-student[i];
        if(t>=k)
        {
            count+=1;
        }
    }
    int team=count/3;
    cout<<team<<endl;
    return 0;

}
