class Solution {
public:
    
    int minDepth(TreeNode* root) {
       
       if(root==NULL)
       {
           return 0;
       }
       if(root->left==0&&root->right==0)
        {
            return 1;
        }
        if(root->left==0)
        {
            return minDepth(root->right)+1;
            
        }
        if(root->right==0)
        {
          return minDepth(root->left)+1;
            
        }
        return 1+min(minDepth(root->left),minDepth(root->right));
    }
};
