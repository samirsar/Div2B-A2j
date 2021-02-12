
#include <bits/stdc++.h>
using namespace std;
using namespace std;
int main()
{
    string str;
    cout<<"Enter string "<<endl;
    cin>>str;
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    vector<char>vowels={'A','O','Y','E','U','I',
                         'a','o','y','e','u','i'};
     for(int i=0;i<str.length();i++)
     {
         if (find(vowels.begin(), vowels.end(),
                      str[i]) != vowels.end())
         {
             str=str.replace(i,1,"");
             if(i==0)
                i=i-1;
             else
                i=0;

         }
     }
     cout<<str<<endl;
         string str1="";
     for(int i=0;i<str.length();i++)
     {

             str1=str1+"."+str[i];

     }
     cout<<str1<<endl;
     return 0;
}
