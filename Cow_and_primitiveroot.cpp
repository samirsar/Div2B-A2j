#include<iostream>
#include<math.h>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    double PHI=n-1;
    int count=0;

    for(double i=1;i<n;i++)
    {
        for(double j=1;j<=PHI;j++)
        {

            long long d=(long long)pow(i,j);
            cout<<d<<" ";
            if(d%n==1)
            {
                if(j==PHI){
                    count++;


                }
                else
                {

                    break;
                }
            }
        }
        cout<<endl;

    }
    cout<<count<<endl;
    return 0;

}
*/
int main()
{
    int n;
    cin>>n;
    int count=0;

    for(int i=1;i<n;i++)
    {
        int x=1;
        for(int j=1;j<=n-1;j++)
        {
            x=x*i;
            x=x%n;
            if(x==1)
            {
                if(j==n-1)
                    count++;
                else
                    break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}



































