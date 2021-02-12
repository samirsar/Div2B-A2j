#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string time;
    cin>>time;
    int hr=(time[0]-48)*10+(time[1]-48);
    int m=(time[3]-48)*10+(time[4]-48);
     if(hr==23)
     {
         m<32?cout<<"23:32":cout<<"00:00"<<endl;
     }
     else
     {
         if(hr>=15&&hr<=19)
         {
             hr==15&&m<51?cout<<"15:51\n":cout<<"20
         }
         else
         {
                   int  d=((hr+1)%10)*10+(hr+1)/10;
               if(hr>=0&&hr<=9)
               {
                   cout<<"0"<<hr+1<<":"<<d<<endl;
               }
               else
               {
                   cout<<hr+1<<":"<<d<<endl;
               }
         }
     }
     return 0;
}
