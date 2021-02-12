#include<iostream>
#include<algorithm>
using namespace std;
void display(int arr[],int n)
{
    //for(int i=0;i<n;i++)
     //  cout<<arr[i]<<" ";


       int d1=arr[1]-arr[0];
       int d2=arr[2]-arr[1];
       d1<0?d1+=12:d1;
       d2<0?d2+=12:d2;
       if(d1==4&&d2==3)
       {
           cout<<"major"<<endl;

           exit(0);
       }
       if(d1==3&&d2==4)
       {
           cout<<"minor"<<endl;

           exit(0);
       }


}
void findpermutation(int arr[],int n)
{
    sort(arr,arr+n);
    //cout<<"possible permutation"<<endl;
    do{
        display(arr,n);

    }while(next_permutation(arr,arr+n));
}
int main()
{
  string s[]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  int arr[3];
  for(int i=0;i<=11;i++)
  {
      if(s1==s[i])
        arr[0]=i+1;
      if(s2==s[i])
        arr[1]=i+1;
      if(s3==s[i])
        arr[2]=i+1;
  }

  findpermutation(arr,3);
  cout<<"strange"<<endl;
  return 0;


}
