#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<string>wine={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        if(find(wine.begin(),wine.end(),s)!=wine.end())
        {
            count++;
        }
        else
        {
            if(s[0]>=48&&s[0]<=57)
            {
                int age=stoi(s);
                if(age<18)
                    count++;
            }
        }

    }
    cout<<count<<endl;
    return  0;
}
