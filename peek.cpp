#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;

}
int main(){
    int arr[10]={2,3,5,7,8,4,2,1};
    cout<<peak(arr,10)<<endl;
    return 0;
    

}
