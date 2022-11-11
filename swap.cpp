#include<iostream>       //Swap two alternate number
using namespace std;
int main()
{
    int a[100];
    int n;
    cin>>n;
    int i,j,temp=0;
    cout<<"enter element";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=i+1;i<n-1;i=i+2,j=j+2)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
