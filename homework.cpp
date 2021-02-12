#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
    return a.length()>b.length();
}
int main()
{
    string s[4];
    int max=0,min=200;
    for(int i=0;i<4;i++)
    {
        cin>>s[i];


    }
    sort(s,s+4,cmp);
    int count1=0;
    for(int i=1;i<4;i++)
    {
        if((s[i].length()-2)*2>(s[0].length()-2))
        {
            count1++;
            break;
        }

    }
    int count2=0;
    for(int i=0;i<3;i++)
    {
        if((s[i].length()-2)<2*(s[3].length()-2))
        {
            count2++;
            break;
        }

    }

    if(count1==1&&count2==1)
        cout<<"C"<<endl;
    else
    {
        if(count1==1&&count2==0)
        {
            cout<<s[3][0]<<endl;
        }
        else
        {
            if(count1==0&&count2==1)
            {
                cout<<s[0][0]<<endl;
            }
            else
            {
                if(count1==0&&count2==0)
                    cout<<"C"<<endl;
            }
        }
    }
    return 0;
}
