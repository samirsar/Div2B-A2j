#include<iostream>
#include<vector>
using namespace std;
/*int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];

    int j=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            arr[j]=i;
            j=j+1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            arr[j]=i;
            j=j+1;
        }
    }
    cout<<arr[k-1]<<endl;
    return 0;

}
*/
int main()
{
    long long n,k;
    cin>>n>>k;
    if(k<=(n+1)/2)
    {
        cout<<k*2-1<<endl;
    }
    else
        cout<<(k-(n+1)/2)*2<<endl;
    return 0;


}
