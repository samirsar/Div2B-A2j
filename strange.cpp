#include<iostream>
#include<unordered_set>
using namespace std;
int showdigit(int x)
{
    string s=to_string(x);
    int d=0;
    for(int i=0;i<s.length();i++)
    {
        d+=s[i]-48;
    }
    return d;
}
int show(int a,int b)
{
   int p,q,r;
   p=showdigit(a);
   q=showdigit(b);
   r=showdigit(a+b);
   if(p+q==r)
    return 1;
   else
    return 0;


}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_set<int>s;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            else
            {
                if(show(arr[i],arr[j]))
                {
                    s.insert(arr[i]);
                    s.insert(arr[j]);
                }
            }
        }
    }
    cout<<s.size()<<endl;


    cout<<endl;
    return 0;
}
