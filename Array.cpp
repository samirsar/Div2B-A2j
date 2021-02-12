#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v_neg,v_pos,v_zero;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(t<0)
         v_neg.push_back(t);
        else
        {
            if(t>0)
                v_pos.push_back(t);
            else
            {
                if(t==0)
                    v_zero.push_back(t);
            }
        }

    }
    if(v_neg.size()%2==0)
    {
        int d=v_neg[v_neg.size()-1];
        v_neg.pop_back();
        v_zero.push_back(d);
    }
    if(v_pos.size()==0)
    {
        if(v_neg.size()>1){
        int d1=v_neg[v_neg.size()-1];
        v_neg.pop_back();
        int d2=v_neg[v_neg.size()-1];
        v_neg.pop_back();
        v_pos.push_back(d1);
                v_pos.push_back(d2);
        }


    }
    cout<<v_neg.size()<<" ";
    for(int i=0;i<v_neg.size();i++)
    {
        cout<<v_neg[i]<<" ";
    }
    cout<<endl;
    cout<<v_pos.size()<<" ";
    for(int i=0;i<v_pos.size();i++)
    {
        cout<<v_pos[i]<<" ";
    }
    cout<<endl;
    cout<<v_zero.size()<<" ";
    for(int i=0;i<v_zero.size();i++)
    {
        cout<<v_zero[i]<<" ";
    }
    cout<<endl;
    return 0;

}
