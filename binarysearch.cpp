#include<iostream>
int binarysearch(int arr[100],int n,int key)
{
    int start=0;
    int end =n-1;
    int mid=(start +end)/2;
   while(start<=end)
   {
    mid=(start +end)/2;
    if(arr[mid]==key)
    {
        return mid; //printf("key found at position %d.....\n",mid+1);
    }
   if(key <arr[mid])
   {
    end=mid-1;
   }
   if(key >arr[mid])
   {
    start=mid+1;
   }
   mid=(start +end)/2;
   }
  return -1; 

}
int main()
{
    int add[100]={1,2,4,5,6,7,8,9};
    int search=binarysearch(add,8,7);
    printf("found at %d\n",search);
}
