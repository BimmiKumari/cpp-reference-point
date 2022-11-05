#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<=31;i++)
    {
        ans=pow(2,i);
    }
    if(ans==n)
        return true;
    else 
        return false;
}
