class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int Currsum=0;
        for(int i=0;i<nums.size();i++)
        {
           Currsum=Currsum+nums[i];
           if(Currsum>maxi)
           {
               maxi=Currsum;
           }
           if(Currsum<0)
           {
               Currsum=0;
           }
        }
        return maxi;
    }
};