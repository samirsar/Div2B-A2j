#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int pos1,pos2,count=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        {
            count++;
            if(count==2)
            {
                pos2=i;
                break;
            }
            else
            {
                pos1=i;
            }

        }
    }
    char temp=s1[pos1];
    s1[pos1]=s1[pos2];
    s1[pos2]=temp;
    if(s1==s2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
