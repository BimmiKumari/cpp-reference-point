class Solution {
public:
int threeSumClosest(vector<int>& nums, int target) {
sort(nums.begin(),nums.end());
if(nums.size()<3)
{ return 0;}
        
int closest=0;
int diff=INT_MAX;
       for(int i=0;i<nums.size();i++)
       {
           int j=i+1;
           int k=nums.size()-1;
          while(j<k){
               int sum=nums[i]+nums[j]+nums[k];
               if(abs(target-sum)<diff)
               {
                   closest=sum;
                   diff=abs(target-sum);
               }
               if(sum==target)
               {
                  return sum;
               }
               else if(sum>target){
                   k--;
               }
               else{
                   j++;
               }
           }
       }
   return closest;
    }

};
