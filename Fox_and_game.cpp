/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(1)
    {
        sort(arr,arr+n,greater<int>());
        if(arr[0]==arr[n-1])
        {
            break;
        }
        arr[0]=arr[0]-arr[1];
         sort(arr,arr+n,greater<int>());
    }
    cout<<arr[0]*n<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
      return b;
    if(b==0)
        return a;
    if(a==b)
        return a;

}
int main()
{
    int a=98,b=56;
    cout<<gcd(a,b);
    return 0;
}
