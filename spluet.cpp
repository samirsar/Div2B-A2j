#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string vowels="AEIOUaeiouYy";
    string que;
    getline(cin,que);
    int j;
    for(int i=que.length()-2;i>=0;i--)
    {
        if(que[i]!=' ')
        {

        j=vowels.find(que[i]);
        break;
        }
    }

    if(j==-1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
