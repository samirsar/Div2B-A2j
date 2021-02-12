#include<iostream>
#include<string>
using namespace std;
int main()
{
    //cout<<"Enter no of word"<<endl;
    int n;
    cin>>n;
    string w[n];
    for(int i=0;i<n;i++)
    {
       // cout<<"Entet words"<<endl;
        cin>>w[i];
        if(w[i].length()>10)
        {
            w[i]=w[i].at(0)+to_string(w[i].length()-2)+w[i].at(w[i].length()-1);
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<w[i]<<endl;
    }
    return 0;

}
