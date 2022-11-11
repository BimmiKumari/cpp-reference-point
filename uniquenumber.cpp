#include<iostream>
using namespace std;
int main()
{
    int i,j,n,count=0;
    cin>>n;
    int a[100];
    cout<<"enter elemnent";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
    {
      if(a[i]=a[j])
      {
        count++;
      }
      //if(count==0)
        //cout<<"unique elemnt is : "<<a[i]<<endl;
    }
    if(count==0)
        cout<<"unique elemnt is : "<<a[i]<<endl;
    }
}
