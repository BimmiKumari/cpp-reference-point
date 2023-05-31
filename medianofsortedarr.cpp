class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
int n1=nums1.size();
int n2=nums2.size();
int i=0;
int j=0;
int index=0;
vector<int> merge(n1+n2);
while(i<n1&&j<n2)
{
if(nums1[i]<=nums2[j])
 merge[index++]=nums1[i++];
else
 merge[index++]=nums2[j++];
}
while(i<n1)
merge[index++]=nums1[i++];
while(j<n2)
merge[index++]=nums2[j++];
int n=n1+n2;
if(n%2==1)
{
return merge[n/2];
}
return (merge[n/2]+merge[n/2-1])/2.0;
    }
};
