#include<iostream>
using namespace std;
struct p
{
    int x,y;
};
int main()
{
    int n;
    cin>>n;
   p point[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>point[i].x>>point[i].y;
    }
    for(int i=0;i<n;i++)
    {
        int upper=0,lower=0,right=0,left=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            else
            {
                if(point[i].x==point[j].x)
                {
                    if(point[i].y>point[j].y)
                        lower++;
                    if(point[i].y<point[j].y)
                        upper++;
                }
                else
                {
                    if(point[i].y==point[j].y)
                    {
                         if(point[i].x>point[j].x)
                          left++;
                    if(point[i].x<point[j].x)
                        right++;
                    }
                }
            }
        }
        //cout<<left<<" "<<right<<" "<<lower<<" "<<upper<<endl;
        if(left>=1&&right>=1&&upper>=1&&lower>=1)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
