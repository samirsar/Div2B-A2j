/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countr=0,countl=0,start,End;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R'&&countr==0)
        {
            start=i;
            countr++;
        }
        else
        {
            if(s[i]=='R'&&(s[i+1]=='L'||s[i+1]=='.'))
            {
                End=i+1;
                break;
            }
            else
            {
                if(countr==0)
                {
                    if(s[i]=='L')
                    {

                        countr++;
                        End=i-1;
                    }
                }
                else
                {
                    if(s[i]=='L'&&s[i+1]=='.')
                    {
                        start=i;
                        break;
                    }
                }
            }
        }
    }
    cout<<start+1<<" "<<End+1<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='.')
        {
            if(s[i]=='R')
            {
                while(s[i]=='R')
                {
                    i=i+1;
                }
                cout<<i<<" "<<i+1<<endl;
                break;
            }
            else
            {
                cout<<i+1<<" "<<i<<endl;
                break;
            }

        }
    }
    return 0;
}
