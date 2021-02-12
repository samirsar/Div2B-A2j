
#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
int main()
{
    string time;
    cin>>time;
    int hr=(time[0]-48)*10+(time[1]-48);
    int m=(time[3]-48)*10+(time[4]-48);
   while(1)
   {
       m=m+1;
       if(m==60)
       {
           hr++;
           m=0;
       }
       if(hr==24)
       {

           hr=0;
       }
       if(hr%10*10+hr/10==m)
       {
           cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<m<<endl;
           break;
       }
   }
     return 0;
}
