#include <iostream>
using namespace std;

/*1
  23
  345
  4567*/


int main()
{
    int n;
    cin>>n;
    int i;
    while(i<=n)
    {
      int j=1;
      while(j<=i)
      {
        cout<<i+j-1;
        j=j+1;
      }
      cout<<endl;
      i=i+1;
    }
}
