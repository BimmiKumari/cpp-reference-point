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
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space -1;

        }
        //2nd triangle
        int start=1;
        while(start<=i)
        {
            cout<<"*";
            start=start+1;
        }
        cout<<endl;
        i=i+1;
    }
}
