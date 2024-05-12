class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int  sum=0;
      int maxsum=INT_MIN;
      int r=0;
      while(r<nums.size())  
      {
        
        sum+=nums[r];
       maxsum=max(sum,maxsum);
          if(sum<0)
          {
              sum=0;
          }
        r++;
      }
      return maxsum;  
    }
};