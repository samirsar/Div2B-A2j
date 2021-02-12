#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=0,i=0,e=0,t=0;
    for(int j=0;j<s.length();j++)
    {
        if(s[j]=='n')
            n++;
        else
        {
            if(s[j]=='i')
                i++;
            else
            {
                if(s[j]=='e')
                    e++;
                else
                {
                    if(s[j]=='t')
                        t++;
                }
            }
        }
    }
    if(n%2==0)
        n=n-1;

    n=(n/2)*3;


    //cout<<n<<" "<<i<<" "<<e<<" "<<t<<endl;

    int count=min(n/3,min(i/1,min(e/3,t/1)));
    cout<<count<<endl;
    return 0;
}
