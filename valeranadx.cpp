#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    char a=s[0][0],b=s[0][1];
    if(a==b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j&&s[i][j]!=a)
           {


               count++;
               break;
           }
           if(j==n-1-i&&s[i][j]!=a)
           {


               count++;
               break;
           }
           if((i!=j&&j!=n-1-i)&&s[i][j]!=b)
           {

               count++;
               break;
           }

        }
    }

    if(count==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
