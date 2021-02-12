#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {
          if(i==0)
          {
              str.replace(i,3,"");
              i=i-1;
          }
          else
          {
              if(str[i-1]!=' ')
              {

              str.replace(i,3," ");
              i=0;
              }
              else
                str.replace(i,3,"");
              i=0;

          }
        }
    }

    cout<<str<<endl;
    return 0;
}
