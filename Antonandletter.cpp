#include<iostream>
#include<set>
#include<sstream>
using namespace std;
int main()
{
    char c;
    set<char>s;
    while(1)
    {
        cin>>c;
        if(c>=97&&c<=122)
        {
           s.insert(c);
        }
        if(c=='}')
            break;
    }

    cout<<s.size()<<endl;




}
