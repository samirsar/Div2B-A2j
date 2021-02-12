#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if(y%x==0){
        return x;
    }
    else{
        return gcd(y%x,x);
    }




}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    return 0;

}
