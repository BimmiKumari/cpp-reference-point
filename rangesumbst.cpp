class Solution {
public:
    int summ=0;
    void sum(TreeNode* root, int low, int high)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val>=low&&root->val<=high)
        {
            summ+=root->val;
        }
        int cur=root->val;
        if(low>cur&&high>cur){
             sum(root->right,low,high);
        }
        else if(low<cur&&high<cur)
        {
            sum(root->left,low,high); 
        }
        else{
        sum(root->left,low,high);
        sum(root->right,low,high);
        }
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
     sum(root,low,high);
        return summ;
    }
};
