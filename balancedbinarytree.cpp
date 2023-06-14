class Solution {
public:
    int heightfinder(TreeNode* root)
    {
         if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL&&root->right==NULL)
        {
            return 1;
        }
        int left= heightfinder(root->left);
        int right= heightfinder(root->right);
        return max(left,right)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int lh=heightfinder(root->left);
        int rh=heightfinder(root->right);
        int diff=abs(lh-rh);
        bool con=diff<=1?true:false;
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        if(con&&left&&right)
        {
            return true;
        }
        return false;
    }
};
