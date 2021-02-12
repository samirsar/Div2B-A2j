#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int m=min({k*l/nl,c*d,p/np},cmp);
    cout<<m/n<<endl;
    return 0;

}
