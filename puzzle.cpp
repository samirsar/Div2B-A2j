#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int max=0,min;
    int dif=1001;

    for(int i=0;i<m-n+1;i++)
    {

            max=*max_element(arr+i,arr+i+n);
            min=*min_element(arr+i,arr+i+n);
            if(max-min<dif)
                dif=max-min;

    }
    cout<<dif<<endl;
    return 0;
}
