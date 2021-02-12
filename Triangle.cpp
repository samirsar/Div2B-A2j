#include<iostream>

using namespace std;
int main()
{
    int point[6],count=0;
    for(int i=0;i<6;i++)
        cin>>point[i];
    int dx[5]={0,-1,0,1,0};
    int dy[5]={0,0,1,0,-1};
    for(int p=0;p<6;p++)
    {
        int x1=point[p];
        int y1=point[++p];
        int x2,y2,x3,y3;

        for(int i=0;i<5;i++)
        {
            int x=dx[i]+x1;
            int y=dy[i]+y1;
            switch(p)
            {
            case 0:
                x2=point[2];
                y2=point[3];
                x3=point[4];
                y3=point[5];
                break;
            case 2:
                x2=point[0];
                y2=point[1];
                x3=point[4];
                y3=point[5];
                break;

            case 4:
                x2=point[0];
                y2=point[1];
                x3=point[2];
                y3=point[3];
                break;
            }
            int a=((x-x2)*(x-x2)+(y-y2)*(y-y2))-((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(x3-x)*(x3-x)+(y3-y)*(y3-y));
            if(a==0)
            {
                if(i==0)
                    cout<<"right"<<endl;
                else
                cout<<"almost"<<endl;

                return 0;
            }


        }
    }
    cout<<"neigther"<<endl;
    return 0;

}
