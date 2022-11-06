#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[100000];
    int n,temp;
    int i,j;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
     for(i=0,j=n-1;i<n/2;i++,j--)  
    {     
        temp = a[i];  
        a[i] = a[j];  
        a[j] = temp;  
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }  
    return 0;
}

