#include<iostream>
using namespace std;
/*
****
 ***
  **
   *
*/
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //first triangle
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        
        //second trianle
        int j=1;
        while(j<=n-i+1)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
