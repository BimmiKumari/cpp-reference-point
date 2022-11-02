#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //1st triangle
       int j=1;
       while(j<=n-i+1)
       {
        cout<<j;
        j=j+1;
       }
       //2nd triangle
       int w=1;
       while(w<i)
       {
        cout<<"*";
        w=w+1;
       }
       int q=1;
       while(q<i)
       {
        cout<<"*";
        q=q+1;
       }
       //4rth triangle
       int r=n-i+1;
       while(r)
       {
        cout<<r;
        r=r-1;
       }
       cout<<endl;
       i=i+1;
    }
}
