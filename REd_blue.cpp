#include<iostream>
#include<algorithm>
using namespace std;
struct card
{
     int r,b;
} ;

void display(int a[], int n,struct card c[],int &count1,int &count2)
{

    string s1="",s2="";
    for (int i = 0; i < n; i++) {
        int p=a[i];
         int t1=c[p].r;
         int t2=c[p].b;
        s1+=to_string(t1);
        s2+=to_string(t2);

    }
if(s1==s2)
{
    count1++;
    count2++;
}
if(s1>s2)
{
    count1++;

}
if(s1<s2)
{
  count2++;
}


}

// Function to find the permutations
void findPermutations(int a[], int n,struct card c[])
{
int count1=0,count2=0;
    // Sort the given array
    sort(a, a + n);

    // Find all possible permutations
   // cout << "Possible permutations are:\n";
    do {
        display(a, n,c,count1,count2);
    } while (next_permutation(a, a + n));
    if(count1==count2)
    {
        cout<<"EQUAL"<<endl;
        return ;
    }
    if(count1>count2)
    {
        cout<<"RED"<<endl;
        return ;
    }
    if(count1<count2)
    {
        cout<<"BLUE"<<endl;
        return ;
    }
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string red,blue;
        cin>>red>>blue;
        int a[n];

        for(int i=0;i<n;i++)
        {
            a[i]=i;
        }
       struct card c[n];
        for(int i=0;i<n;i++)
        {
            c[i].r=red[i]-48;
            c[i].b=blue[i]-48;
        }

 findPermutations(a,n,c);

    }
}
