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
            cout<<j<<" ";
            j=j+1;
        }
        
        //2nd triangle
        int start=i-1;
        while(start)
        {
            cout<<"*"<<" ";
            start=start-1;
        }
        
        //third triangle 
         int start2=i-1;
        while(start2)
        {
            cout<<"*"<<" ";
            start2=start2-1;
        }
        int start3=n-i+1;
        while(start3){
             cout<<start3<<" ";
            start3=start3-1;
        }
            
        cout<<endl;
        i=i+1;
    }
    
}
