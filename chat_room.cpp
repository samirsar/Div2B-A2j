#include<iostream>
using namespace std;
int main()
{
    string str2="hello";

    string str;
    cin>>str;
    if(str==str2)
    {
        cout<<"YES"<<endl;
        return 0;
    }
  /*  if(str2.length()>n)
    {
        if(str2.find('h')+1&&str2.find('e')+1&&str2.find('l')+1&&str2.find('o')+1)
        {
            int p=str2.find('l')+1;
            if(str2.find('l',p)+1)
            {

            cout<<"YES"<<endl;
            }
            else
            {

                cout<<"NO"<<endl;

            }

        }
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
        */

     /*int p=str.find('h');
     if(p+1)
     {
       int a=str.find('e',p+1);
       if(a+1)
       {
          int b=str.find('l',a+1);
          if(b+1)
          {
              int c=str.find('l',b+1);
              if(c+1)
              {
                int d=str.find('o',c+1);
                if(d+1)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
              }
              else
                cout<<"NO"<<endl;
          }
          else
            cout<<"NO"<<endl;
       }
       else
        cout<<"NO"<<endl;
     }
     else
        cout<<"NO"<<endl;
        */
        int count=0;
        int i,j;
        for( i=0,j=0;i<str.length()&&j<str2.length();i++)
        {
            if(str[i]==str2[j])
            {
                count+=1;

                j++;
            }

        }
        if(count==5)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    return 0;
}
