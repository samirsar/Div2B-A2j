#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int matrix[5][5];
    int m,n;
    int m1,m2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]!=0)
            {
                m=i+1;
                n=j+1;
            }
        }
    }
    m1=abs(n-3);
    m2=abs(m-3);
    cout<<m1+m2<<endl;
    return 0;


}
