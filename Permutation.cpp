#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    int count=1,max_count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
            if(count>max_count)
                max_count=count;
        }
        else
        {
            count=1;
        }
    }
    if(max_count<=(n+1)/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
