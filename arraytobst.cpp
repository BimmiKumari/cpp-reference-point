




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    TreeNode* converttobst(int begin ,int end,vector<int>& ans)
    {
        if(begin>end)
            return NULL;
        int mid=begin+(end-begin)/2;
         TreeNode* root= new TreeNode(ans[mid]);
       
        root->left=converttobst(begin,mid-1,ans);
        root->right=converttobst(mid+1,end,ans);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return converttobst(0,nums.size()-1,nums); 
    }
};
