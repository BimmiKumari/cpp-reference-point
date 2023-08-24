class Solution {
public:
    int solve(vector<int>& cost,int n){
       int prev2=cost[0];
        int prev1=cost[1];
        int cur;
       
        for(int i=2;i<n;i++)
        {
            cur=cost[i]+min(prev2,prev1);
            prev2=prev1;
            prev1=cur;
        }
        return min(prev2,prev1);  
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size(); 
        return solve(cost,n);
    }
};