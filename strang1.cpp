#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1,v2,v3,v4;
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i<n;i++)
    {
       int t;
       cin>>t;
       if(t==0||t==100){
        v1.push_back(t);
        count4++;
       }
       else
       {
           if(t%10==0&&count1==0){
            v2.push_back(t);
            count1++;
           }
           else
           {
               if((t>=1&&t<=9)&&count2==0)
               {
                   v3.push_back(t);
                   count2++;
               }
               else
               {
                   if((t>10&&t%10!=0)&&count3==0)
                   {
                       v4.push_back(t);
                       count3++;
                   }
               }

           }
       }
       if(count1==1&&count2==1&&count3==1&&count4==2)
        break;


    }
    if(count1!=0||count2!=0)
        cout<<count1+count2+count4<<endl;
    else
        cout<<count4+count3<<endl;

    if(v1.size()!=0)
    {
        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";


    }
        if(v2.size()!=0)
            cout<<v2[0]<<" ";
        if(v3.size()!=0)
            cout<<v3[0]<<endl;


    if(count1==0&&count2==0)
        {
            if(v4.size()!=0)
                cout<<v4[0]<<endl;
        }


    return 0;
}
