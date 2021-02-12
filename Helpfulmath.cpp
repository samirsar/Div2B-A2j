#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
void show(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
void printMath(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
        {
            cout<<v[i];
        }
        else
        {
            cout<<v[i]<<"+";
        }
    }
    cout<<endl;
}
int main()
{
   // cout<<"Enter string here"<<endl;
    string word;
    cin>>word;
    stringstream str(word);
    string str2;
    vector<int>v;
    while(getline(str,str2,'+'))
    {
        int i=stoi(str2);
        v.push_back(i);
    }
    sort(v.begin(),v.end());
  //  show(v);
    printMath(v);
    return 0;
}
